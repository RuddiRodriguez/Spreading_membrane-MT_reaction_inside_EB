
event=0;
tube = 0 ; 
small = 0;
nodeform=0;
for i=1:length (orderpto)
    
  order_inter=orderpto{i, 1} ;
  yy = posinterp{i, 1} ;
  micropos = posinterpmicro{i,1}
  lengtthmax=(yy(find (order_inter>0.3)));
  if ~isempty( lengtthmax)
 if lengtthmax(1)>0.3 &&  lengtthmax(1)>0.5
     tube=tube+1;
 end
 if lengtthmax(1)>0.3 &&  lengtthmax(1)<0.5
     small=small+1;
     event(i)=1;

 end
 if lengtthmax(1)<0.3 
    nodeform=nodeform+1;
    event(i)=0;

 end
 
 
 
  else
     tube=tube+1; 
     event(i)=2;
  end
%  if lengtthmax(1)<0.3 
%      nodeform=nodeform+1;
% 
%  end    
      
end 