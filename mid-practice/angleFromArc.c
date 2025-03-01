/*Find the angle of a segment in a circle; read the arc length and radius from user.*/

#include<stdio.h>
#define pi 3.1416

int main(){

    float arcLength, radius;

    printf("Enter the value of Arclength & Radius :  ");
    scanf("%f %f", &arcLength, &radius);

    printf("The required Angle :  %.2f degree", (arcLength*360)/(2*pi*radius));

    return 0;
}