function [vector,yy,vinterp,vinterpMTL,yyMTL,order_inter,timeinter,MTLt] = sampling_data(times,pos,controldensity,inter,tmax,MTL,order_P)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here

vinterpMTL=0;
post = pos (1:inter:end);
T= times  (1:inter:end);
Den = controldensity(1:inter:end);
MTLt =  MTL (1:inter:end);
order_Pt = order_P(1:inter:end);
try
vector = [T post Den order_Pt];
catch err
    
    post = post (1:length(T));
    Den = Den (1:length(T));
    MTL = MTL(1:length(times));
    pos = pos(1:length(times));
    order_Pt = order_Pt(1:length(T));
    vector = [T' post Den order_Pt];
    
   
end
try
timeinter = 0:3:max(T);
[yy] = interp_nonunique(T,post(1:length(T)),timeinter);
%yy = interp1(times,pos(1:length(times)),timeinter);
yyMTL = interp_nonunique(T,MTLt(1:length(T)),timeinter);
vinterp = diff (yy)./diff(timeinter);
vinterpMTL = diff (yyMTL)./diff(timeinter);
order_inter = interp_nonunique(T,order_Pt(1:length(T)),timeinter);
  figure ;plot(T./60,MTLt,timeinter./60,yyMTL,timeinter./60,yy,timeinter./60,yyMTL-yy,'o',timeinter./60,order_inter,'s');drawnow

 %figure ; plot (yyMTL,yyMTL-yy,'o');drawnow
catch err
    return
end

% yy=NaN;
% vinterp=NaN;

end

