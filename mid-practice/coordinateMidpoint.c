/*Read the co-ordinates of two points (x1,y1) and (x2,y2) from user. 
Compute the midpoints of these two points and print it up to 2 decimal points.*/

#include<stdio.h>

int main(){

    int x1, x2, y1, y2;

    printf("Enter the coordinates of the 1st point (x1,y1):  ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the 2nd point (x2,y2):  ");
    scanf("%d %d", &x2, &y2);

    printf("The coordinate of the Midpoint is: (%.2f,%.2f)", (x1+x2)/2.0, (y1+y2)/2.0);

    return 0;
}