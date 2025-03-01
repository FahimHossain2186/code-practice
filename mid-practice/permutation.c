/*Write a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user.*/

#include<stdio.h>

int main(){

    int n, r, nPr = 1;

    printf("Enter the value of n & r:  ");
    scanf("%d %d", &n, &r);

    for(int i = 0; i < r; i++) nPr *= (n-i);

    printf("nPr = %d\n", nPr);
}