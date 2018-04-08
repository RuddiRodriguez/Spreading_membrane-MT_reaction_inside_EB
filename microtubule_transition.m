function [state,new_posMTL]= microtubule_transition (state,MTL,arrayratesMT,positiontran,tau)


if state==0
    
    switch positiontran
        case 1
            new_posMTL = MTL(end)+0.000615;
            state=0;
        case 2
            new_posMTL = MTL(end)-0.000615;
            state=0;
        case 3
            new_posMTL = MTL(end)+0;
            state=1;
    end
    
else
    
    switch positiontran
        case 1
            decre = arrayratesMT(1).*tau;
            new_posMTL = MTL(end)-decre;
            state=1;
        case 2
            new_posMTL = MTL(end)+0;
            state=0;
            
    end
    if new_posMTL<0
    new_posMTL=0;
    state=0;
end
end