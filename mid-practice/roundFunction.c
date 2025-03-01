/*C program to compute the integer resulting from rounding a number n (using function)*/

#include<stdio.h>

int rounding(float x){

    if(x - (int) x >= 0.5)      return x+1;
    else                        return x;

}

int main(){

    float x;

    printf("Enter the number you want to round: ");
    scanf("%f", &x);

    printf("After rounding, the number: %d", rounding(x));

    return 0;
}