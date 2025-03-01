/*Solve the equation: ax^2+bx+c=0 and print the solutions. Read a,b,c from user
Hint: compute the values of (-b+sqrt(b^2-4ac))/2a and (-b-sqrt(b^2-4ac))/2a; here sqrt is a C
function that computes the squared root of a number*/

#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c, d;
    
    scanf("%d %d %d", &a, &b, &c);

    printf("One root = %.2f\n", (-b + sqrt(b*b-4*a*c))/2*a);
    printf("One root = %.2f\n", (-b - sqrt(b*b-4*a*c))/2*a);
    return 0;
}
