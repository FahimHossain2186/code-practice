/*Timelimit: 1
Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

Input
There is no input in this problem.

Output
The output contains a value corresponding to the value of S.
The value should be printed with two digits after the decimal point.*/

#include <stdio.h>
#include <math.h>

int main(){

    float sum = 0;

    for(float i = 0; i <= 40; i++)       sum += (2 * i + 1)/pow(2, i);
    
    printf("%.2f\n", sum);

    return 0;
}