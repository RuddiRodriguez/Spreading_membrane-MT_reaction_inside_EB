function [pos,times,arrayrates,MTarryocupationt,ocupationnumbert,vector,controldensity,vinterp,results, MTLent,parameters]= Spreading_calling (ratesi,...
    kappa,sigmai,maxsimutime,npin,density,initubel,densityindex)
if nargin < 1 || isempty (kappa)
    
    %ratesi = [1.5 16.5 1500 1500 500 500 810 729 0.007 733 0.9]; % speed 3 um/min
    %ratesi = [1.5 16.5 1500 1500 500 500 910 729 0.007 733 0.9];% speed 4.8
    % ratesi = [1.5 16.5 1500 1500 500 500 910 729 0.007 733 0.9];% speed 4.8
     % ratesi = [1.5 16.5 1500 1500 500 500 910 729 0.007 733 0.9];% speed 
    ratesi = [1.5 40 10000 10000 600 600 810 729 0.012 733 0.0001];%test
    %ratesi = [[9.23076923076923e-05,0.00101538461538462,1,1,0.0615384615384615,0.0615384615384615,0.0498461538461538,0.0448615384615385,1.23076923076923e-06,0.00615384615384615,4.30769230769231e-06]];
%     Pb = ratesi(1,2)./(ratesi(1,1)+ratesi(1,2));
%     Pu = ratesi(1,1)./(ratesi(1,1)+ratesi(1,2));
%     DM = (Pb*1)+Pu*(0.8);
%     rateDM = DM/(0.008*0.008);
%     ratesi(1,5:6) =  rateDM;
    %ratesi = [1.3 295 20 20 ];%100 100 100];
    %     ratesi = [1.3 25 120 120]%100 100 100];
end

if nargin < 2 || isempty (kappa)
    
    kappa =[  5].*1e-20;
end

if nargin < 3 || isempty (sigmai)
    
    sigmai = 4e-6;
end

if nargin < 4
    
    maxsimutime =300
end

if nargin < 5
    
    npin = 1;
end

if nargin < 6
    
    density = [ 4   ] ;                                                         %particles per um2
end
if nargin < 7
    
    initubel = 200 ;                                                         %particles per um2
end
if nargin < 8
    
    densityindex = [1] ;                                                         %particles per um2
end
%% 


%% Loading EB gradient profile  
%filename = '/Users/ruddirodriguez/Dropbox/Data_analysis/Data_analysis/Prisma/In_vitro_membrane_deformation/TXTdata/Profileintensity/EB_200.txt';
filename = 'D:\Users_data\Ruddi\Dropbox\Data_analysis\Data_analysis\Prisma\In_vitro_membrane_deformation\TXTdata\Profileintensity\EB_200.txt';

EB1 = importfile_profile_matrix(filename);
grad=3.*((EB1(1:300,2))./10);%
grad =sort (grad,'ascend');
%%

figure ;
numsi=1;
results = cell (numsi,length(densityindex),length(kappa));
MTLent= cell (numsi,length(densityindex),length(kappa)); 
parameters = cell (numsi,length(densityindex),length(kappa)); 
MTarryocupationt = cell (numsi,length(densityindex),length(kappa));
ocupationnumbert = cell (numsi,length(densityindex),length(kappa));
vt= 0 ;
vmm=0.036
for j =1:length(kappa)
    j
    for k =1:length(densityindex)
       
        vinterp=0;
        for i=1:numsi
%                maxsimutime =80+(120-80)*rand(1,1);
              sigmai = 2e-7+(7e-7-2e-7)*rand(1,1);
            npin = randi([1 3],1,1);
            [pos,times,globalrate,arrayrates,MTarryocupation,ocupationnumber,vector,interpovar,controldensity,vinterp,vinterpMTL,MTLt,R_ini,r0_ini] = membrane_position_MT_Infinit_family_reaction (ratesi,...
                kappa(j),sigmai,maxsimutime,npin,density(1),initubel,densityindex(k),vmm,grad);
            
            i
            MTLent{i,k,j} = MTLt;
            results {i,k,j} = vector;
            MTarryocupationt{i,k,j} = MTarryocupation;
            ocupationnumbert{i,k,j} = ocupationnumber;
            
            parameters {i,k,j} = [sigmai maxsimutime R_ini npin r0_ini];
            assignin('base', 'results', results);
            assignin('base', 'MTLent',  MTLent); 
            assignin('base', 'parameters', parameters)
            assignin('base', 'rates', ratesi)
        end
        %vt (vt<=0)=NaN;
%         vtmean(k,j)=nanmean(nanmean(vt));
%         stdmean (k,j)
    end
end

% [fitresult, gof] = createFit_power(vector(:,1),vector(:,2)-vector(1,2));
% figure;contourf(kappa,densityindex,vtmean);
% colorbar
%vt (vt<=0)=NaN;