function [c] = intersect_new(a,b)
% 'R2012a' flag implementation

% flagvals = {'rows' 'sorted' 'stable'};
% if nargin == 2
%     byrow = false;
%     order = 'sorted';
% else
%     byrow = (options(1) > 0);
%     if options(3) > 0
%         order = 'stable';
%     else % if options(2) > 0 || sum(options(2:3)) == 0)
%         order = 'sorted';
%     end
% end

% % Check that one of A and B is double if A and B are non-homogeneous. Do a
% % separate check if A is a heterogeneous object and only allow a B
% % that is of the same root class.
% if ~(isa(a,'handle.handle') || isa(b,'handle.handle'))
%     if ~strcmpi(class(a),class(b))
%         if isa(a,'matlab.mixin.Heterogeneous') && isa(b,'matlab.mixin.Heterogeneous')
%             rootClassA = meta.internal.findHeterogeneousRootClass(a);
%             if isempty(rootClassA) || ~isa(b,rootClassA.Name)
%                 error(message('MATLAB:INTERSECT:InvalidInputsDataType',class(a),class(b)));
%             end
%         elseif ~(strcmpi(class(a),'double') || strcmpi(class(b),'double'))
%             error(message('MATLAB:INTERSECT:InvalidInputsDataType',class(a),class(b)));
%         end
%     end
% end

%    
    % Determine if A and B are both row vectors.
%     rowvec = isrow(a) && isrow(b);
%     % Convert to columns
%     a = a(:);
%     b = b(:);
   
    % consider reversing a and b only if 'sorted'
    if length(a) >= length(b)
        if nargout <= 1
            c = (a(ismember(a,b)));
            c = [c; b([])]; % make sure output has correct type
            
        end
    end
%     
end