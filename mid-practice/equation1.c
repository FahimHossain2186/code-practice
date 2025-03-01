/*Compute the value of 5x^3-4x^2+√(x)+3; read x from user*/

#include<stdio.h>
#include<math.h>

int main(){

    int x;
    printf("The Expression:\t5x\u00B3-4x\u00B2+√(x)+3\n");
    printf("Enter the value of x:\t");
    scanf("%d", &x);

    printf("Result:\t%.2f\n",5*pow(x,3)-4*x*x+sqrt(x)+3);
    
    return 0;
}