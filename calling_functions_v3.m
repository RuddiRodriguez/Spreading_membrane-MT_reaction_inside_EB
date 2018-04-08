function [pos,arrayrates,pnevents,lengm,t,force,ten,eventsss]= calling_functions_v3 (simun,tensionin,kappaini,ratesini,Vg,kc,timesimu)

%% 
if nargin < 1
    
    simun = 1;
end

if nargin < 2
    tensionin = [ 1 ].*1e-7;
   
end
if nargin < 3
    
   kappaini = [2.5].*1e-19;
end

if nargin < 4
    
   ratesini = [1.3 0.5];
end
if nargin < 5
    
   Vg = [30];
end

if nargin < 6
    
   kc = 2.8;
end

if nargin < 7
    
   timesimu = 5;
end


parameterv=Vg;
pneventst = 0;
lengm=0;
startTic = tic;
s= clock;
tubenumber = 0;
countforce = 0 ;
force = NaN ;
ten = 0 ; 
ini_mem_bound_length =32; 
filename = '/Users/ruddirodriguez/Dropbox/Data_analysis/Data_analysis/Prisma/In_vitro_membrane_deformation/TXTdata/Profileintensity/EB_200.txt';
%filename = 'D:\Users_data\Ruddi\Dropbox\Data_analysis\Data_analysis\Prisma\In_vitro_membrane_deformation\TXTdata\Profileintensity\EB_200.txt';
EB1 = importfile_profile_matrix(filename);
 h = waitbar(0,'Please wait...');
for g = 1:1
for j = 1:length (parameterv)

    
     grad=3.*((EB1(1:300,2))./10);%
%     R=(1/20) * exp(-(1/20)*(1:100));
%      grad = R./R(end);
%    
%      grad = grad.*3;
      grad =sort (grad,'ascend');
    [pos,arrayrates,pnevents,lengm,t] = MT_dynamics_v3 (simun,tensionin ,kappaini,ratesini,grad,Vg(j),kc,timesimu,ini_mem_bound_length);
    tubenumber = [pnevents.positive];
    zerostubenumers = find (tubenumber~=0);
    if isempty (zerostubenumers)
       
        countforce = countforce +1;
        force (g) = 2.*pi.*sqrt (2.*kappaini.*tensionin );
        ten (g) = tensionin ;
        V (g) = Vg (j);
        break ;
    else
        force (g) = NaN;
        ten (g) = NaN;
        eventsss (g)=pnevents;
    end

     
    


% tubenumber (j) = length(find ( maxpossevent>0.2)); 
% tubetotal (j) = length ( maxpossevent)

end
 is = etime(clock,s);
       esttime = is * 20;
h = waitbar(g/20,h,...
         ['remaining time =',num2str(esttime-etime(clock,s),'%4.1f'),'sec' ]);
      %%% end estimate remaining time
end
tm = toc (startTic);
close (h)
% meanevents= nanmean(pneventst);
% stdvents= (nanstd(pneventst,[],1));
% sem = stdvents./(sqrt(length(stdvents)));
% figure;  errorbar (parameterv,meanevents,sem)
% vector = [tensionin meanevents stdvents]
end