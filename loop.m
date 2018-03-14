function graph=mmm(m,n)
A=rand(m,n)*100;
min=inf;
max=-inf;
sum=0;


for index=1:length(A)
    if A(index)<min
        min=index;
    end
    if A(index)>max
        max=A(index);
    end
    sum=sum+A(index);
end
mean= sum/length(A);
min=A(index);
fprintf('  mean, %f',mean)
fprintf('  minimum, %f',min)
fprintf('  maximum, %f\r',max)        
    