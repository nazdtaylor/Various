function division=divalg(n,d)
%algorithm, divalg(n,d)
q=0;
r=n;
while r>=d
    r=r-d;
    q=q+1;
end
fprintf('The divided %i times with a remainder of %i\n', q, r)
