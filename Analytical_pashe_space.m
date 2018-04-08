% Parameter initialization 
%clear
t = 0:0.5:100;                       % s
koff = 1.5;                     % 1/s
kon = 0.20;                     % 1/um2s
cl = [90];                       % # molecules / um2
D = 2;                          % um2/s  
b = (8./1000);                    % reaction zone in um 
a = (8./1000)./13
scale= (1).*1e-9;               % Barrier
Temp = 1.381e-23.*307.15;       % Temperatue  kelvin
kappa = [ 5].*1e-20;                  % Bending modulus
sigmai = 3.*1e-7+ ((2e-6)-(3e-7)).*rand(1,100);                   % Membrane tension
R_ini  = 5.*1e-6+ ((15e-6)-(5e-6)).*rand(1,100);
r0_ini  = sqrt(kappa./(2.*sigmai));
Lc = (((Temp)./(4.*pi.*kappa)).*((R_ini.^2)./r0_ini)).*1e6;
np = randi([1 3],1,100);
pos = 0;
V= 0 ;
koofre=0;
Vt=0;
post=0;
posmt = 0;
Vmt = [6 ]./60;

%%
%Calculations
 figure1 = figure;
count=0;
Vt=0;
for j =1:length(np)
    count = count+1;
    V=0;
    pos=0;posmt=0;
    counti=0;
    orderp=0;
    
for i=2:length (t)
    counti=counti+1;
betat = 1.0/Temp;
beta_ini = ((4.*pi.*kappa(1)).*betat).*(r0_ini(1)./( R_ini(j).^2));          
sigma(i) = sigmai(j).*exp (beta_ini.*(pos(end).*1e-6)); 
F0(i)=(2.*pi.*sqrt(2.*kappa(1).*sigma(i)));%+2.*pi*1.63e9*16e-18*(V(i).*1e-6)*(log(R_ini/r0_ini )); 
koofre(i) = koff.*exp(((F0(i).*scale.*betat)./np(j))); 
%%
%Equation
V(i) = b.*((kon.*cl(1))-koofre(i));
 posmt (i)= posmt (i-1)+Vmt(1).*0.5;
pos (i) = pos (i-1)+V(i).*0.5;
if pos (i)>posmt(i)
    pos (i)=posmt(i);
end
orderp(i) =(posmt(i)-pos(i));%./posmt(i); 
% if pos (i)<=0
%     pos (i)=0;
% end

end
% orderp =(posmt-V)./posmt; 
%   subplot (2,2,1)
% % Fn=(F0);
% subplot1 = subplot(2,2,1,'Parent',figure1);
% hold(subplot1,'on');
%    plot1=plot ((pos(2:end)),(koofre(2:end)),'LineWidth',2);hold on;
%    subplot(2,2,2)
%   plot2=plot ((pos(2:end)),(V(2:end)),'LineWidth',2);hold on;
%   plot(yy(1:end-1),vinterp)
%   plot(x,y,'o')
%   
%    subplot(2,2,3)
%   plot3=plot ((pos(2:end)),(sigma(2:end).*1e6),'LineWidth',2);hold on;
%   subplot4=subplot(2,2,4)
%   plot4=plot ((t(2:end)),(orderp(2:end)),'LineWidth',2);hold on;
%   plot(vector(:,2),vector(:,end))
% %  xlim(subplot4,[0 12]);
% % % % Uncomment the following line to preserve the Y-limits of the axes
% %  ylim(subplot4,[0 0.5]);

 Vt (1:length(V),count)=V;
 post (1:length(pos),count)=pos;
 drawnow;
   %  ylim([-4 0.5])
%    xlim([0 20])
end
%% 
% for k = 1:size (Vt,2)
%    if Vt(2,k)>0
%        Is = Vt (2:end,k);
%      stgsv = [max(Is), 20, 3, min(Is)];
%     [estimates,eval] = fit_survival(t(2:end)', Is, stgsv);% MT reference
%     figure(1);plot(t(2:end),Is,'b-o',t(2:end),eval,'r-');hold on
% xlim([0 100])
% ylim([0 0.2])
%     
%     reftipr= estimates(2);
%     factor=abs(t-reftipr);
%     [col,ix(k)]=min (factor);
%    else
%        ix(k)=NaN;
%    end
%     
% end




%%
% set(plot1(1),'Color',[0 0.447058826684952 0.74117648601532]);
% set(plot1(2),'Color',[1 0 0]);
% set(plot1(3),'Color',[0 0.498039215803146 0]);




%plotting 
meanv=mean (Vt,2);
stdv = sqrt(std (Vt,[],2))/100
%  %errorbar(Exp1(:,1),Exp1(:,2),Exp1(:,3),'o');hold on
  errorbar(t(2:end),meanv(2:end),stdv(2:end));
 % plot(t(2:end),meanv(2:end));
%errorbar(Exp200(:,1),Exp200(:,2),Exp200(:,3),'o');
% xlim([0 60])
% ylim([0 0.2])

% A = b*kon;
% B = b*koff;
%  f = @ (cl,y) b*((kon*cl)-(koff.*exp(y)));
% % x0 = [500,1]; 
% % [xmin, fval] = fminsearch(@(x)f(x(1),x(2)), x0)
% %x = linspace(1,10,20);
% y = linspace(0,4,length(cl));
%  figure (2)
%  [CL,Y] = meshgrid(cl,y);
%  surf(CL,Y,f(CL,Y), 'EdgeColor','none', 'FaceAlpha',0.5)
% hold on
% plot3(xmin(1),xmin(2), f(xmin(1),xmin(2)), 'gp', 'MarkerSize', 10, 'MarkerFaceColor','g')
% hold off
% xlabel('X')
% ylabel('Y')

