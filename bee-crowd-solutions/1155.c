/*Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 1/2 + 1/3 + … + 1/100

Input
There is no input in this problem.

Output
The output contains a value corresponding to the value of S.
The value should be printed with two digits after the decimal point.*/

#include<stdio.h>

int main(){

    float sum = 0;

    for(float i = 1; i <= 100; i++)       sum += 1/i;
    
    printf("%.2f\n", sum);

    return 0;
}