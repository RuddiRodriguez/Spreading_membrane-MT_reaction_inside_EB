pks = 0 ;
locs = 0;
tube = 0 ;
small = 0;
nodeform=0;
for j=1:length (orderpto)
    
    order_intert=orderpto{j, 1} ;
    yyt = posinterp{j, 1} ;
    micropost = posinterpmicro{j,1};
   
    [pks,locs]= findpeaks (micropost,'MinPeakProminence',0.20);
    if isempty(pks)
        pks=micropost(end);
        locs = length(micropost);
    else
        pks = [pks';micropost(end)];
        locs = [locs';length(micropost)];
    end
   try 
     figure ; plot (timeto(1:end),yyt,timeto(1:end),micropost,timeto(locs),micropost(locs),'o');hold on
   catch err
       figure ; plot (timeto(1:end-1),yyt,timeto(1:end-1),micropost,timeto(locs),micropost(locs),'o');hold on
   end
    [pksindexrow,pksindexcol] = find((pks>0.3));
    locs = locs (pksindexrow);
    DataInv = 1.01*max(micropost ) - micropost ;
    [Minima,MinIdx] = findpeaks(DataInv,'MinPeakProminence',0.12);
    Minima = micropost (MinIdx);
    timespeaks= (timeto(locs));
    timespeaksmin= (timeto(MinIdx));
    if isempty(MinIdx)
        locs=locs(1);
    end
    try
        plot (timeto(1:end),yyt,timeto(1:end),micropost,timeto(locs),micropost(locs),'o',timeto(MinIdx),micropost(MinIdx),'s');hold off
    catch err
         plot (timeto(1:end-1),yyt,timeto(1:end-1),micropost,timeto(locs),micropost(locs),'o',timeto(MinIdx),micropost(MinIdx),'s');hold off
    end
    i=0;
    for i=1:length(locs)
        if i ==1
            order_inter=order_intert(1:locs(1)) ;
            yy = yyt(1:locs(1)) ;
            micropos = micropost(1:locs(1));
%             yy=yy-yy(1);
%     micropos =micropos-micropost(1);
        else
            
            order_inter=order_intert(MinIdx(i-1):locs(i)) ;
            yy = yyt(MinIdx(i-1):locs(i)) ;
            micropos = micropost(MinIdx(i-1):locs(i));
                 
            
        end
        lengtthmax=(yy(find (order_inter>0.3)));
    if ~isempty( lengtthmax)
        [pksm]=max(findpeaks (yy,'MinPeakProminence',0.01,'Npeaks',1));
        if isempty(pksm)||pksm<0.3
            nodeform=[nodeform;1];
            tube=[tube;0];
             small=[small;0];
        end
        
        if ~isempty(pksm)&& pksm>0.5 %&&  pksm>0.5
            tube=[tube;1];
            small=[small;0];
            nodeform=[nodeform;0];
        end
        if ~isempty(pksm)&& pksm>0.3 &&  pksm<0.5
            small=[small;1];
            nodeform=[nodeform;0];
            tube=[tube;0];
            
        end
        
        
        
        
    else
        tube=[tube;1];
        small=[small;0];
            nodeform=[nodeform;0];
    end
%    figure (1); plot (timeto,micropost,timeto,yyt) 



    end
    
    
    
    
    
    
    %  if lengtthmax(1)<0.3
    %      nodeform=nodeform+1;
    %
    %  end
 j ;  
end
vector = [sum(tube);sum(small);sum(nodeform)]