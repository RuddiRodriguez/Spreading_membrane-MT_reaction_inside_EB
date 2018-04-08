results = resultst
data=0;
pos=0;
times=0;
controldensity=0;
vinterpto = 0;
vinterptoM=0;
orderpto=0;
vinterpto = cell (size(results,1),1); 
vinterptoMT =cell (size(results,1),1); 
posinterp =cell (size(results,1),1); 
posinterpmicro =cell (size(results,1),1); 
orderpto=cell (size(results,1),1); 
vectorresultsfinal=0;
close all;
for t = 1:size(results,1)
   
    for tt=1:size(results,3)
        pos=([results{t,1}(:,2)]);
        
        times=([results{t,1}(:,1)]);
         controldensity=([results{t,1}(:,3)]);
         MTL=(MTLt{t, 1})
         Order_p=([results{t,1}(:,end)]); 
%          plot_mt_pos ( MTL, pos,times)
%          plot(times,MTL,times,pos);hold on;
       [vector,yy,vinterp,vinterpMTL,MTLttinter,order_inter,timeto,MTLtt] = sampling_data(times,pos,controldensity,1,300,MTL,Order_p);
%       histogram(vinterpMTL)
         orderpto{t}=order_inter;
          vinterpto{t}=vinterp;
         vinterptoMT{t}=vinterpMTL;
         posinterp{t}=yy;
         posinterpmicro{t}=MTLttinter;
         [~,colorder,valororder] = find (order_inter>0.3);
         try
 timedetach (t) = timeto(colorder(1)-1);
 posdetach (t) = yy(colorder(1)-1);
 vinterpMTL(vinterpMTL<=0)=NaN;
 speedmean(t)=nanmean(vinterpMTL).*60
         catch err
             timedetach (t) = NaN;
 posdetach (t) = NaN;
 
 speedmean(t)=NaN;
         end 
 
% figure (3); plot (yy,order_inter);
    end
    
end
vectorresultsfinal = [speedmean; timedetach; posdetach; speedmean]';
function plot_mt_pos ( MTL, pos,times)
MTp=MTL(1:length(times)); 
memp = pos(1:length(times));
figure ; plot(times,MTp-memp);
figure
plot (times,MTL(1:length(times)),times,pos(1:length(times)))
    end