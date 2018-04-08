function [new_pos,iarraysize,ocupationnumber,MTarryocupation] = bound_to_lattice(positiontran,ocupationnumber,...
    pos,iarraysize,matrix_tmemla,matrix_tmemlap1,MTarryocupation,matrix_tMTla,matrix_tMTlap1)
%A bound transition from the membrane to the lattice
new_pos = pos(end) + 0;
iarraysize = iarraysize+0 ;
if positiontran~=0 && positiontran < lastnonzeroMT(end)+1 && ocupationnumber(positiontran)~=0 && MTarryocupation (positiontran)~=1
    if positiontran~=1
        ocupationnumber (positiontran-1:positiontran+1) = ocupationnumber (positiontran-1:positiontran+1)+matrix_tmemla (2,:);
        MTarryocupation (positiontran-1:positiontran+1) = MTarryocupation (positiontran-1:positiontran+1)+matrix_tMTla (2,:);
    else
        ocupationnumber (positiontran:positiontran+1) = ocupationnumber (positiontran:positiontran+1)+matrix_tmemlap1 (2,:);
        MTarryocupation (positiontran:positiontran+1) = MTarryocupation (positiontran:positiontran+1)+matrix_tMTlap1 (2,:);
    end
end
end