/*Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.
Input
The input contains an integer value N (0 < N < 13).

Output
The output contains an integer value corresponding to the factorial of N.

Input Sample	Output Sample
4               24*/

#include<stdio.h>

int factorial(int n){

    if (n == 0)             return 1;
    else if (n == 1)        return 1;
    else                    return n * factorial (n-1);
}
int main(){

    int n;

    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}