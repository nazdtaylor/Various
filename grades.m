function grade=student;
V=[5 10 15 20 25 30 35 40 45 50 55 65 60 67 81 92 7 70 80 99];
index=1;

for index=1:length(V)
    if V(index)>=90
        fprintf('A, %\n', V(index));
    elseif V(index)>=80
        fprintf('B, %\n', V(index));
    elseif V(index)>=70
        fprintf('C, %\n', V(index));
    elseif V(index)>=60
        fprintf('D, %\n', V(index)); 
    else
        fprintf('E, %\r  ', V(index));
    end
end
end
