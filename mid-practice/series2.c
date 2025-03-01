/*Print the sum of the series:1^2+2^2+...+n^2; read n from user*/

#include<stdio.h>

int main(){

    int x;

    printf("Enter the value of n for the series 1^2+2^2+...+n^2 :\t");
    scanf("%d",&x);

    printf("Sum:  %d", x*(x+1)*(2*x+1)/6);

    return 0;
}