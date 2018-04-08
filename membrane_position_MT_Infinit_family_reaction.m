function [pos,times,globalrate,arrayrates,MTarryocupationttotal,ocupationnumbertotal,vector,yy,controldensity,vinterp,vinterpMTL,MTLt,R_ini,r0_ini] = membrane_position_MT_Infinit_family_reaction (ratesi,...
    kappa,sigmai,maxsimutime,npin,density,initubel,densityindex,vm,grad)

%%
% this function try to simulate the membrane spreading using
% input
%ratesi- initial values of on-rate and off-rate for a single molecule in  1/s
%kappa-  bending modulus in J
%sigmai- intila value of mebrane tension in N/m .
%
%
%% Input checking
%close all
if nargin < 1 || isempty (ratesi)
    
    ratesi = [1.5 12 0.1 0.1 0.1 0.1 0 0];
    %ratesi = [1.3 295 20 20 ];%100 100 100];
    %     ratesi = [1.3 25 120 120]%100 100 100];
end

if nargin < 2 || isempty (kappa)
    
    kappa =5e-20;
end

if nargin < 3 || isempty (sigmai)
    
    sigmai = 2e-4;
end

if nargin < 4
    
    maxsimutime =8;
end

if nargin < 5
    
    npin = 4;
end

if nargin < 6
    
    density = 1 ;                                                         %particles per um2
end
if nargin < 7
    
    initubel = 32 ;                                                         %particles per um2
end
if nargin < 8
    
    densityindex = 1 ;                                                         %particles per um2
end
%% Parameters Intialization
%Number of peptides a tthe tip
numberpb = npin;
%Initial length of the tube
Tubeli=initubel;
%Several parameters  Initialization
[koof,R_ini,r0_ini,~,~,new_pos,times,t_final,count,~,~,Lcritical,t,pos,betat,beta_ini] = simulation_parameter_initialization_infinite(ratesi,maxsimutime,numberpb,sigmai,kappa,Tubeli);

positiontran=0;
tranflag=0;
vt= 0;
order_P = 0;
figure1 = figure;
[subplot1,subplot2,subplot3,subplot4]=figure_control_ini(figure1);
state=0;
reactionn = 11-4;%length (ratesi(ratesi~=0))-4;
globalrate = zeros (1,reactionn);
tau = zeros (1,reactionn);
arrayratesMTG = [ratesi(1,7) ratesi(1,8) ratesi(1,9)];
arrayratesMTS = [ratesi(1,10) ratesi(1,11)];
m=0;
Vm = 0.008*ratesi(1,2);
tempp=0;
counttotal=0;
ocupationnumbertotal=0;
MTarryocupationttotal=0;
 vm=vm
%sigmao=ratesi (1,1);
%post = zeros (1000,1);
%[r1] = random_generator;
%% Folder_To save  the results
% currentFolder = pwd;
%
%
% mkdir (currentFolder,'results');
% f = fullfile(currentFolder,'results');

%% Matrix Initialization

[MTarryocupation,ocupationnumber,arrayrates,Tubeli,iMTLsize,iarraysize,densitylb,densitylu] = simulation_initialization_matrix_infinite(reactionn,density, initubel,densityindex,r0_ini,ratesi);
[matrix_tmemla,matrix_tMTla,matrix_tmemlap1,matrix_tMTlap1] = matrix_transition_reaction_family();


MTL = Tubeli./1000;
new_posMTL = MTL (end);
%% Density Calculation

MTocutemp = MTarryocupation(2:end);
memocutemp = ocupationnumber(2:end);
controldensity=sum(MTocutemp(MTocutemp~=0))+sum(memocutemp(memocutemp~=0));
AL =(Tubeli/1000);
controldensity=controldensity/AL;
controldensitynew=0;

%% Loop

while t <= t_final
    %% Simulation initialization
    
    count = count+1;
    
    MTarryocupationtempindex = find(MTarryocupation~=0);
    if isempty (MTarryocupationtempindex)
        pos (end) = 0 ;
        break;
    end
    [np,MTarryocupationtemp ] = initialization_infinite_new(ocupationnumber(:),numberpb,MTarryocupationtempindex(:),MTarryocupation(:));
    
    %% Tension renormalization
    [sigma] = ten_renormalization(sigmai,kappa,betat,r0_ini,R_ini,pos,beta_ini);
    %% Rate Renormalization
    [~,rates] = rates_renormalization(sigma,kappa,Vm,r0_ini,R_ini,koof,ratesi,betat,np,sigmai);
    
    %% Rates Matrix initialization arrayrates is the propensity of the reaction
    %     ocupationnumber = gather (ocupationnumber);
    if count ==1
        [arrayrates] = arrayrates_values_family_reaction(count,MTarryocupationtemp,numberpb,iMTLsize,MTarryocupation,ocupationnumber,rates,koof,arrayrates,positiontran,tranflag,densitylb,densitylu,vm,grad);
    end
    
    %% Global rate calculation
    
    % arrayratesnozeros = arrayrates(:);
    [globalrate] = globalrate_calculation_family_reaction(globalrate,arrayrates);
    if state ==0
        globalrate (1,7) =(sum(arrayratesMTG))';
    else
        globalrate (1,7) =(sum(arrayratesMTS))';
    end
    
    r1= rand(1,reactionn+1);
    %
    %% Set time for simulation and ending_finding the Family to fire
    
    %     tau(count) = exprnd(1/globalrate);
    [tau] = tau_calculation_family_reaction(tau,globalrate,r1);
    [mintau,Imintau] = min (tau);
    t = t + mintau;                                                     % update time
    if t >= t_final
        
        t = t_final;
        order_P = [order_P;order_P_new];
        pos = [pos; pos(end)];
        MTL = [MTL;new_posMTL];
        times = [times, t];
        
        controldensitynew=sum(MTarryocupation(MTarryocupation~=0))+sum(ocupationnumber(ocupationnumber~=0)) ;
        AL = 2*pi*(r0_ini*1000000)*(pos(end));
        controldensitynew=controldensitynew/( AL);
        controldensity = [controldensity; controldensitynew];
        break;
    end
     
    %% Reaction inside a Family fired
  
    if Imintau==7
        if state==0
            [mnumber] = position_transition_family_reaction (arrayratesMTG,globalrate(7),r1(reactionn+1));
        else
            [mnumber] = position_transition_family_reaction (arrayratesMTS,globalrate(7),r1(reactionn+1));
        end
    else
        [mnumber] = position_transition_family_reaction (arrayrates(Imintau,:),globalrate(Imintau),r1(reactionn+1));
    end
    
    
    %% Transition
    if mnumber~=0
        
        positiontran = mnumber;
        
        transitionkind = Imintau;
        
        if state==0
            arrayratesMT=arrayratesMTG;
            
        else
            arrayratesMT=arrayratesMTS;
        end
        [ ocupationnumber,MTarryocupation,new_pos,pos,iarraysize,status,tranflag,controldensitynew,lastnonzeromembranes,MTL,new_posMTL,state] = transitions(transitionkind,positiontran,ocupationnumber,MTarryocupation,MTarryocupationtemp,new_pos,pos,iarraysize,...
            matrix_tmemla,matrix_tMTla,matrix_tmemlap1,matrix_tMTlap1,controldensity(end),MTL,new_posMTL,state,mintau,arrayratesMT);
        [controldensitynew] =density_calculation(MTarryocupation,ocupationnumber,new_pos);
         MTarryocupationtempindex = find(MTarryocupation~=0);
        if isempty (MTarryocupationtempindex)
            pos (end) = 0 ;
            break;
        end
        if (lastnonzeromembranes(end)==length(ocupationnumber))% || lastnonzeromembranes(end)>50)
           % [ocupationnumber,MTarryocupation,arrayrates,iMTLsize,tempp] = checking_size_matrix(ocupationnumber,MTarryocupation,arrayrates,lastnonzeromembranes,tempp);
             %[ocupationnumber,MTarryocupation,arrayrates,iMTLsize] = checking_size_matrix_v1(ocupationnumber,MTarryocupation,arrayrates);
             counttotal=counttotal+1;
             [ocupationnumber,MTarryocupation,arrayrates,iMTLsize,ocupationnumbertotal,MTarryocupationttotal] = checking_size_matrix_v1(ocupationnumber,MTarryocupation,arrayrates,counttotal,ocupationnumbertotal,MTarryocupationttotal);
             %[ocupationnumbertemp,MTarryocupationtemp,arrayratestemp,iMTLsize,tempp] = checking_size_matrix(ocupationnumber,MTarryocupation,arrayrates,lastnonzeromembranes,tempp);
        end
        if count ~=1
            
            [arrayrates] = arrayrates_values_family_reaction(count,MTarryocupationtemp,numberpb,iMTLsize,MTarryocupation,ocupationnumber,rates,koof,arrayrates,positiontran,tranflag,densitylb,densitylu,vm,grad);
            
        end
        
    end
    
    
    %% Checking to finish the loop
    if status == 5
     order_P = [order_P;order_P_new];
        pos = [pos;new_pos];
        times = [times, t];
        controldensity = [controldensity; controldensitynew];
         MTL = [MTL;new_posMTL,];    
        break;
    end
    
    if isempty ( ocupationnumber)
        break;
    end
    
%     if new_pos<=0
%         order_P = [order_P;order_P_new];
%         pos = [pos;new_pos];
%         times = [times, t];
%         controldensity = [controldensity; controldensitynew];
%          MTL = [MTL;new_posMTL,];  
%         break;
%     end
    %% Updating Outputs
   
    order_P_new = new_posMTL-new_pos;
    pos = [pos;new_pos];                                                    % update vector with all positions
    MTL = [MTL;new_posMTL];
    order_P = [order_P;order_P_new];
    times = [times, t];
    controldensity = [controldensity; controldensitynew];
%     if pos(end)>0.1
%         ss=1;
%     end
   
%     if mod (times,0.1)
        v = ((MTL(count,1)-MTL(1,1))./(times(count)-times(1,1))).*60;
        vt = [vt, v];
%     end
    
%     if pos(end)<0
%         new_pos = 0;
%         pos = [pos;new_pos];
%         order_P = [order_P;order_P_new];
%         MTL = [MTL;new_posMTL,];
%         times = [times, t];
%         controldensity = [controldensity; controldensitynew];
%          
% %         break;
% 
%     end
%     
    %% Plotting
    
   if (mod(m,1000000) == 0)
 %             figure_control(pos,MTL,count,times,v,controldensity,subplot1,subplot2,subplot3,subplot4);
            % figure (1);plot(pos(count),rates(1,1),'o');hold off
%           drawnow;
         
        fprintf('%4.2f\n',times(end));
        fprintf('%4.2f\n',t_final-times(end));
         assignin('base', 'times', times);
         assignin('base', 'pos', pos);
         assignin('base', 'controldensity', controldensity);
         assignin('base', 'MTLraw', MTL);
         assignin('base', 'Order_p', order_P);
    end
    
    
    m=m+1;
    
end
%  end
%% Checking times
%  [post] = getting_var_smpd(pos);
%  [taut] = getting_var_smpd(tau);


if status == 5
    td = 0;
    while pos(end) >0.001
        td = td +1;
        new_pos = pos(end) * exp (-0.00005*td);
        pos = [pos;new_pos];
        
    end
    %  figure;plot(pos)
    
end


[vector,yy,vinterp,vinterpMTL,yyMTL,order_inter,timeinter,MTLt] = sampling_data(times,pos,controldensity,5000,t_final,MTL,order_P);
end