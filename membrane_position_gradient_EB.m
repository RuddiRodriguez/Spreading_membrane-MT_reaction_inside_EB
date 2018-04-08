function [pos,MTarryocupation,ocupationnumber,arrayrates,iMTLsize,iarraysize ] = membrane_position_gradient_EB (ratesi,kappa,sigmai,maxsimutime,npin,MTarryocupation,ocupationnumber,arrayrates,Vm,...
    R_ini,pos,iMTLsize,iarraysize,step, MTL,grad )


%%
% this function try to simulate the membrane spreading 

%
%
%% Input checking

if nargin < 1 || isempty (kappa)
    
    ratesi = [0.02 0.001];
end

if nargin < 2 || isempty (kappa)
    
    kappa = 5e-19;
end

if nargin < 3 || isempty (sigmai)
    
    sigmai = 1e-6;
end

if nargin < 4
    
    maxsimutime = 500;
end

if nargin < 5
    
    npin = 4;
end
%% Matrix Initialization

numberpb = npin;                                                              %initial number of bounf peptides

m=0;



%% Parameters Intialization

Temp = 1.381e-23.*307.15;                                                   % Simulation temperature
beta = 1.0/Temp;                                                            % Inverse temperature

koof = ratesi(1,1);                                                         % off-rate

kon = ratesi(1,2);


r0_ini  = sqrt(kappa./(2.*sigmai));                                         % Tubes radius


% sigmao = sigmai;
% koofreo =koof ;

new_pos = pos(end);                                                         %Initialization membrane position

t = 0;                                                                      % time0

times = 0;

t_final=maxsimutime;                                                        %T final

count = 0 ;                                                                 %Parameter controlling the loop number

npi=numberpb;                                                               % number of petides at the leading edge without zippered

sigma = sigmai;                                                             % Tension initial

Lcritical = ((Temp./(4.*pi.*kappa))...                                      %Critical length to force changing with tube length
    .*((R_ini.^2)./r0_ini)).*1e6;

rng(sum(1000000*clock),'v4');

%   subplot(1,2,2);

% plot(MTarryocupationplot,'s','MarkerSize',6);hold on
% %     xlabel('number of X molecules');
% %     ylabel('number of Y molecules');
% axis( [0 30 0 1.1]);

%% Loop

while t <= t_final
    %% Simulation initialization
    
    
    count = count+1;                                                        %loop number
    
    MTarryocupationtempindex = find(MTarryocupation~=0);
    if isempty (MTarryocupationtempindex)
        pos (end) = 0 ; 
        break;
    end
    
     
    
    
    [~,colocunozero] = (find (ocupationnumber~=0));
    
    MTLindex = (ceil ((colocunozero(end))))-(0:(numberpb-0));
    
    C = intersect(MTarryocupationtempindex,MTLindex);                       
    CC = setdiff(MTarryocupationtempindex,MTLindex);
    CCC= setdiff(1:max(C),[CC C]);
    np = length (C);
    
    
    MTarryocupationtemp = MTarryocupation(MTarryocupation~=0);              
    
    if length (MTarryocupationtemp)< 2
        
        np=np;
    end
%    figure (456); plot (MTarryocupation(MTarryocupationtempindex),'bo');hold on ; plot (ocupationnumber(colocunozero),'ro')
%    drawnow;
    
    
    %% Tension renormalization
    
    %     r0_ini  = sqrt(kappa./(2.*sigma));
    
    
    if (sigmai==0) %|| (pos (end) < Lcritical)
        
        sigma=sigmai;
    else
        beta_ini = ((4.*pi.*kappa).*beta).*(r0_ini./( R_ini.^2));           % renormalization factor
        sigma = sigmai.*exp (beta_ini.*(pos(end).*1e-6));                   % tension renormalization
    end
    %       sigma=sigmai;
    %%
    
    %rate renomalization
    F0=(2.*pi.*sqrt(2.*kappa.*sigma))+2.*pi*1.63e9*16e-18*((Vm/60).*1e-6)*(log(R_ini/r0_ini ))+(2.*pi*pos(end)*1e-6*(Vm/60)*1e-6*2e-3);                                      % F0 to pull a tube
    
    scale= (1).*1e-9;                                                       % barrier height
    
    
    %F0 = 2e-9; F0 test
    
    
    koofre = koof.*exp(((F0.*scale.*beta)./np));                            % off rate renormalization
    
    
    rates=ratesi;                                                           % New rates
    
    rates(1,1) =koofre  ;
    %     rates(1,2) =rates(1,2).*100 ;
    
    %     rates = rates;%./rates(1,2);                                            % Can be normalized rates to 1
    
    
    %% Rates Matrix initialization arrayrates is the propensity of the reaction
    
    
    
    
    %% off rate
    if  (length(MTarryocupationtempindex)<3)
        MTarryocupationtempindex=MTarryocupationtempindex;
    end   
     
    
    if ~isempty (C)
        if length (MTarryocupationtemp)<=numberpb
            arrayrates (1,:) = rates(1,1).*MTarryocupation(1,:);
            arrayrates (1,C) = rates(1,1).*MTarryocupation(1,C);
            arrayrates (1,CCC) = koof.*MTarryocupation(1,CCC);
            arrayrates (1,CC) = koof.*MTarryocupation(1,CC);
%             arrayrates (1,(C(end)+1):iMTLsize) = koof.*MTarryocupation(1,(C(end)+1):iMTLsize);
            
            
           
            
        else
            
            
            [~,colocuone] = (find (MTarryocupation==1));
            [~,colocuonezerooff] = (find (MTarryocupation==0));
            arrayrates (1,C) = rates(1,1).*MTarryocupation(1,C);
            arrayrates (1,CC) = koof.*MTarryocupation(1,CC);
            arrayrates (1,CCC) = koof.*MTarryocupation(1,CCC);
            %
        end
    else
      
       searchingzeros = find (arrayrates(1,:)==0);
       CCCC = intersect(searchingzeros,colocunozero);
       arrayrates(1,CCCC) = rates(1,1);  
       arrayrates (1,CC) = koof.*MTarryocupation(1,CC); 
       if isempty (CCCC)
           break ; 
       end
      if ~isempty (CC)  ;
       arrayrates (1,CC) = koof.*MTarryocupation(1,CC);
      else
          pos(end) = 0;
       break;
      end
    end
    
    %% on-rate
    stepshift = ceil((MTL-pos(end))/0.008);
    gradtemp = grad;
    
    if length (gradtemp)-stepshift+1>0
        gradtemp(end-stepshift+1:end)=[];
        [~,colocunozero] = (find (ocupationnumber~=0));
         ocupationnumber (colocunozero) = 3 ;
        
        if ~isempty(gradtemp)
            
            if length (colocunozero)<length (gradtemp)
                
                gradetempt = gradtemp (end-length (colocunozero)+1:end);
                gradetempt = gradetempt';
                arrayrates (2,1:colocunozero(end)) = rates(1,2).*gradetempt.*ocupationnumber(1:colocunozero(end));
                arrayrates (2,(colocunozero(end)+1):iMTLsize) = rates(1,2).*ocupationnumber((colocunozero(end)+1):iMTLsize);
            end
            
            if length (colocunozero)==length (gradtemp)
                
                gradetempt = gradtemp (1:end);
                gradetempt = gradetempt';
                arrayrates (2,1:colocunozero(end)) = rates(1,2).*gradetempt.*ocupationnumber(1:colocunozero(end));
                arrayrates (2,(colocunozero(end)+1):iMTLsize) = rates(1,2).*ocupationnumber((colocunozero(end)+1):iMTLsize);
            end
            
            if length (colocunozero)>length (gradtemp)
                try
                    indexre = length (colocunozero)-length (gradtemp);
                    arrayrates (2,1:indexre) = (kon).*ocupationnumber(1:indexre);
                    arrayrates (2,indexre+1:colocunozero(end)) = (rates(1,2).*gradtemp).*ocupationnumber(indexre+1:colocunozero(end));
                    arrayrates (2,((colocunozero(end))+1):iMTLsize) = (rates(1,2)).*ocupationnumber(((colocunozero(end))+1):iMTLsize);
                catch err
                    return ;
                end
            end
            
        else
            
            arrayrates (2,1:iMTLsize) = rates(1,2).*ocupationnumber(1:iMTLsize);
            
        end
    else
        
        arrayrates (2,1:iMTLsize) = rates(1,2).*ocupationnumber(1:iMTLsize);
        
    end
    
    
   %%test
    [~,testzeros] = (find (arrayrates (1,:)~=0));
    [~,testzeros2] = (find (arrayrates (2,:)~=0));
    
    if length( testzeros)> length (testzeros2)
       arrayrates (1,:) = rates(1,1).*MTarryocupation(1,:);
            arrayrates (1,C) = rates(1,1).*MTarryocupation(1,C);
            arrayrates (1,CCC) = koof.*MTarryocupation(1,CCC);
            arrayrates (1,CC) = koof.*MTarryocupation(1,CC); ; 
        
    end
    
    %% Global rate calculation
    
    
    globalrate = (sum(arrayrates(:)));                                     % Total propensity that anything happens
    
    %     prob = arrayrates./globalrate;                                       % Total propensity' that anything happens
    
    r1= rand(1,2);
    
    %     test=ceil(0 + ((globalrate)-0)*rand(1,1000));
    %     figure;histogram(test);
    %
    %% Set time for simulation and ending
    
    %tau(count) = exprnd(1/globalrate);                                     % sojourn time -slowtau = -
    
    tau(count)=(1/globalrate).*log(1/r1(1));                                % sojourn time -faster
    
    t = t + tau(count);                                                     % update time
    
    if t > t_final
        
        t = t_final;
        
        pos = [pos; pos(end)];
        
        times = [times, t];
        
        break;
    end
    
    
    
    %% Tube progression
    
    %initialization
    
    
    arrayratesnozeros = arrayrates(:);
    
    
    
    mnumber = 1;
    
    sumalpha = arrayratesnozeros(1)/globalrate;
    while (r1(2) >= sumalpha)
        mnumber = mnumber + 1;
        sumalpha = sumalpha + arrayratesnozeros(mnumber)/globalrate;
    end
    
    
    %% taking position and kind of transition
    if mnumber==0
        positiontran = 0;                                                   % integer part
        
        transitionkind = 0;                                                 % remaining part
        
        [ ocupationnumber,MTarryocupation,new_pos,pos,iarraysize,status ] = transitions_no_EB(transitionkind,positiontran,ocupationnumber,MTarryocupation,MTarryocupationtemp,new_pos,pos,iarraysize,step );
        
    else
        
        positiontran = (ceil((mnumber)/2));
        
        transitionkind = mod((mnumber),2);
        
        [ ocupationnumber,MTarryocupation,new_pos,pos,iarraysize,status ] = transitions_no_EB(transitionkind,positiontran,ocupationnumber,MTarryocupation,MTarryocupationtemp,new_pos,pos,iarraysize,step );
        
        
    end
    
    
    %     figure ; plot (ocupationnumber);hold on ; plot (MTarryocupation);
    
    %% Checking to finish the loop
    if status == 0
        break;
    end
    
    if isempty ( ocupationnumber)
        break;
    end
    
    if new_pos<=MTL
        pos = [pos;new_pos];
    else
        pos = [pos;MTL];
    end
    % update vector with all positions
    %     sigmao = [  sigmao ; sigma];                                            % update vector with  ar to check
    %     times = [times, t];                                                     % update vector with all times
    %     koofreo = [koofreo ; koofre];
    
    
    %        if (mod(m,5) == 0)
    %         %figure(1);
    %     %     subplot(1,2,1);
    %         plot(times(1:count), pos(1:count,1).*5, times(count),pos(count,1).*5,'.r');
    % %         xlabel('time');
    %     %     ylabel('number of X molecules');
    %     %     axis( [0 t_final 0 1]);
    %
    %       MTOpolotcol = find (MTarryocupation==1 ) ;
    %
    %        MTOpolotzero = find(MTarryocupation==0 ) ;
    %        membranepcupa = find (ocupationnumber~=0);
    %     %     %figure(2);
    %     %      subplot(1,2,2);
    %
    %         plot(MTarryocupation(MTOpolotcol),'.r');hold on
    %
    %         if ~isempty(MTOpolotzero)
    %          plot(MTOpolotzero,1,'.g');hold on
    %         end
    %     %       plot(MTOpolotcol(end)+1,1,'.k');hold on
    %     %     xlabel('number of X molecules');
    %     %     ylabel('number of Y molecules');
    %           axis( [0 30 min(pos).*5 1.1]);
    %         drawnow;
    %
    %        end
    
    m=m+1;
    
end
%% Checking times

% T(1)=0;
% for i=1:length(tau)
%     T(i+1)=sum(tau(1:i));
% end
% try
%         figure(1)
%         plot(T,pos,'b-')
%         hold on
% catch err
%         figure(1)
%         plot(T(1:end-1),pos,'b-')
%         hold on
% end
% drawnow;
% figure(2);plot(sigmao,koofreo,'-o');hold on



end