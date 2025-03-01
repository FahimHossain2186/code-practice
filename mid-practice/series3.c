/*Print the sum of the series:1^3+2^3+...+n^3; read n from user*/

#include<stdio.h>
#include<math.h>

int main(){

    int x;

    printf("Enter the value of n for the series 1^3+2^3+...+n^3 :\t");
    scanf("%d",&x);

    printf("Sum:  %.0f", pow(x*(x+1)/2,2));

    return 0;
}