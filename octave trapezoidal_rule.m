% OCTAVE program to estimate the integral
% ∫(0 to 1) x^2 dx using the Trapezoidal Rule
% with 4 subintervals

clc;
clear;

% Define the function
f = @(x) x.^2;

% Limits of integration
a = 0;
b = 1;

% Number of subintervals
n = 4;

% Step size
h = (b - a) / n;

% Generate x values
x = a:h:b;

% Evaluate the function at x values
y = f(x);

% Apply Trapezoidal Rule
T = (h/2) * ( y(1) + 2*sum(y(2:n)) + y(n+1) );

% Display results
disp('Values of x:');
disp(x);

disp('Values of f(x):');
disp(y);

fprintf('Estimated integral using Trapezoidal Rule = %.6f\n', T);
