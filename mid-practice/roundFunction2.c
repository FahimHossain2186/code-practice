/*Write a C program using function that reads a floating point number n and an integer d and then
prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68*/

#include<stdio.h>
#include<math.h>

float customRounding(float x, int y){

    float flag = x * pow(10, y);

    flag += .5;

    return ((int)flag)/pow(10,y);
}

int main(){

    float n; int r;

    printf("Enter the number: ");
    scanf("%f", &n);
    printf("Enter the number of decimal places to round to: ");
    scanf("%d", &r);

    switch (r){
        case 1:
        printf("Rounded value upto %d decimal places: %.1f", r, customRounding(n,r));
        break;

        case 2:
        printf("Rounded value upto %d decimal places: %.2f", r, customRounding(n,r));
        break;

        case 3:
        printf("Rounded value upto %d decimal places: %.3f", r, customRounding(n,r));
        break;

        case 4:
        printf("Rounded value upto %d decimal places: %.4f", r, customRounding(n,r));
        break;

        case 5:
        printf("Rounded value upto %d decimal places: %.5f", r, customRounding(n,r));
        break;

        case 6:
        printf("Rounded value upto %d decimal places: %.6f", r, customRounding(n,r));
        break;

        case 7:
        printf("Rounded value upto %d decimal places: %.7f", r, customRounding(n,r));
        break;

        case 8:
        printf("Rounded value upto %d decimal places: %.8f", r, customRounding(n,r));
        break;

        default:
        break;
    }
    

    return 0;
}