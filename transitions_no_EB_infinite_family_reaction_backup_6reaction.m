function [ ocupationnumber,MTarryocupation,new_pos,pos,iarraysize,status,tranflag,controldensitynew,MTL,new_posMTL,state] = transitions(transitionkind,positiontran,ocupationnumber,MTarryocupation,MTarryocupationtemp,new_pos,pos,iarraysize,...
    matrix_tmemla,matrix_tMTla,matrix_tmemlap1,matrix_tMTlap1,controldensitynew,MTL,new_posMTL,state,tau,arrayratesMT)
%% Conditions for tubes growth , bound and unbound of peptides
%1- the position of the transition is given by the integer part  of the
% mnumber/number of transitions ---(2), the  transition is given by the remainig of division (remaiinig 0 bound, remaining 1 , unbound)
% in each position the first rate is bound the second rate is unbound
%(remaiinig 0 bound, remaining 1 , unbound)

%% Initialization


tranflag=0;
status=1;
lastnonzeromembranes = find (ocupationnumber>0);
lastnonzeroMT = find (MTarryocupation>0);
postemp = pos(end);
iarraysizetemp = iarraysize;
ocupationnumbertemp  = ocupationnumber;
MTarryocupationtemp = MTarryocupation;
%% Transitions
switch transitionkind
    case 3
        %Diffusion on membrane-Diffusion to the right
        [new_pos,iarraysize,ocupationnumber,tranflag] = diff_mem_right(new_pos,positiontran,ocupationnumber,lastnonzeroMT,pos,...
            iarraysize,matrix_tmemla,matrix_tmemlap1,lastnonzeromembranes,MTarryocupation,controldensitynew,ocupationnumbertemp,tranflag);
    case 4
        %Diffusion on membrane-Diffusion to the left
        [new_pos,iarraysize,ocupationnumber,tranflag] = diff_mem_left(new_pos,positiontran,ocupationnumber,...
            pos,iarraysize,matrix_tmemla,matrix_tmemlap1,MTarryocupation,controldensitynew,ocupationnumbertemp,tranflag);
    case 5
        %Diffussion to the right on the microtubule
        [new_pos,iarraysize,ocupationnumber,MTarryocupation] = diff_MT_right(new_pos,positiontran,ocupationnumber,...
            lastnonzeroMT,pos,iarraysize,matrix_tMTla,matrix_tMTlap1,lastnonzeromembranes,MTarryocupation);
        
    case 6
        %Diffussion to the left on the microtubule
        [new_pos,iarraysize,ocupationnumber,MTarryocupation] = diff_MT_left(new_pos,positiontran,ocupationnumber,...
            lastnonzeroMT,pos,iarraysize,lastnonzeromembranes,MTarryocupation);
        
    case 7
        %MT
        [state,new_posMTL]= microtubule_transition (state,MTL,arrayratesMT,positiontran,tau);
        
    case 2
        %Bound
        [new_pos,iarraysize,ocupationnumber,MTarryocupation] = bound_transition(new_pos,positiontran,ocupationnumber,...
            pos,iarraysize,matrix_tmemla,matrix_tmemlap1,MTarryocupation,matrix_tMTla,matrix_tMTlap1,lastnonzeroMT);
        
    otherwise
        %Unbound
        [new_pos,iarraysize,ocupationnumber,MTarryocupation,status] = unbound_transition(new_pos,positiontran,ocupationnumber,...
            pos,iarraysize,matrix_tmemla,matrix_tmemlap1,MTarryocupation,matrix_tMTla,matrix_tMTlap1,lastnonzeroMT,lastnonzeromembranes,status);
        
        
end
%% Adjusting parameters

if new_posMTL<0
    new_posMTL=0;
end
% if new_posMTL<new_pos
%     new_pos=new_posMTL;
% end
% if new_pos>new_posMTL
%     new_pos=pos(end) + 0;
% end


if MTarryocupation(1)~=1
    MTarryocupation(1)=1;
    
end

if ocupationnumber(1)~=1
    ocupationnumber(1)=1;
    
end

end

