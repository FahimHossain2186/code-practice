/*Read the lengths of base and height of a right angle triangle. 
Then compute the length of its hypotenuse using Pythagorean theorem.*/

#include <stdio.h>
#include <math.h>

int main(){

    int length, breath;

    printf("Enter the values of Length & Breath:  ");
    scanf("%d %d", &length, &breath);

    printf("Hypotnuse:  %.2f\n", sqrt(pow(length,2)+pow(breath,2)));

    return 0;
}