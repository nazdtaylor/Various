function hypot=hypot(a,b)
index=1;

for index=1:length(a)
    c=((a(index))^2)+((b(index)^2));
    fprintf('hyp %\f', c)
end
end
