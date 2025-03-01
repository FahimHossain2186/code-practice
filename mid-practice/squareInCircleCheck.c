/*Write a C program that reads the radius r of a circle and the side a of a square from user and 
then checks if that square can be placed inside that circle or not. Hint: Use Pythagorean theorem.*/

#include<stdio.h>
#include<math.h>

int main(){

    float r, a;

    printf("Enter the value of the radius r of a circle and the side a of a square:  ");
    scanf("%f %f", &r, &a);

    if(sqrt(2)*a<=2*r) printf("The square can be placed inside that circle.\n");
    else printf("The square can't be placed inside that circle.\n");

    return 0;
}