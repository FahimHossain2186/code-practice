/*Print the sum of the series:1+2+...+n; read n from user*/

#include<stdio.h>

int main(){

    int x;

    printf("Enter the value of n for the series 1+2+...+n :\t");
    scanf("%d",&x);

    printf("Sum:  %d", x*(x+1)/2);

    return 0;
}