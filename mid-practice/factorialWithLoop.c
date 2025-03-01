/*Write a C program that reads an integer and then computes & prints the factorial of that integer(No recusion)*/

#include<stdio.h>

int main(){

    int x, factorial = 1;

    printf("Enter an integer:  ");
    scanf("%d", &x);

    for(int i = 1; i<=x; i++)   factorial *= i;

    printf("Factorial:  %d", factorial);

    return 0;
    
}