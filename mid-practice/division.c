/*Compute quotient and remainder when you divide x by y (read x, y from user). 
Also, compute quotient and remainder when you divide y by x. Print all these four results.*/

#include <stdio.h>

int main(){

    int x, y;

    printf("Value of x & y:\t");
    scanf("%d %d", &x, &y);

    printf("When dividing x by y\n\tQuotient:  %d  Remainder:  %d\n", x/y, x%y);
    printf("When dividing y by x\n\tQuotient:  %d  Remainder:  %d\n", y/x, y%x);

    return 0;
}