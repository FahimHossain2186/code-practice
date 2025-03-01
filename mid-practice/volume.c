/*Find the volume of a (a) cube and (b) cylinder
Note: Read the necessary inputs from the user, such as the side length for the cube and the height and diameter for the cylinder.*/

#include<stdio.h>
#define pi 3.1416

int main(){

    int side, height, diameter;

    printf("Enter the value of side for cube:\t");
    scanf("%d", &side);
    printf("Enter the value of height & diameter for cube:\t");
    scanf("%d %d", &height, &diameter);

    printf("The volume of cube:\t%d\n",side*side*side);
    printf("The volume of cylinder:\t%.2f\n",pi*diameter*diameter*height/4);

    return 0;
}