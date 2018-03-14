function x= fixpoint(fun, guess, ebound)
i=2;
x(1)=guess;
x(2)=fun(guess);


while (x(i)-x(i-1))>ebound
    i=i+1;
    x(i)= fun(x(i-1));
   

end

x=-x(end)