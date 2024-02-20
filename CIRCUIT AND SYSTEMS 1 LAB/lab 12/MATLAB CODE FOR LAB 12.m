clc
clear all
A=[10 -2 -8;
    -2 17 -5;
    -8 -5 15];
V=[10 0 0]';
I=inv(A)*V;
fprintf('The current in mesh 1 = %.3f Amps \n',I(1))
fprintf('The current in mesh 2 = %.3f Amps \n',I(2))
fprintf('The current in mesh 3 = %.3f Amps \n',I(3))
R5=I(3)-I(2);
fprintf('The current in R5  = %.3f Amps \n',R5)