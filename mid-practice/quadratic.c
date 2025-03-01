/*Solve the equation: ax^2+bx+c=0 and print the solutions. Read a,b,c from user
Check if the roots of the equation are real or not. 
If they are real, then print them; otherwise print “No real root exist.” */

#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c, d;
    
    scanf("%d %d %d", &a, &b, &c);

    if(b*b-4*a*c<0) printf("No real root exist.");
    else{
        printf("One root = %.2f\n", (-b + sqrt(b*b-4*a*c))/2*a);
        printf("One root = %.2f\n", (-b - sqrt(b*b-4*a*c))/2*a);
    }
    return 0;
}
