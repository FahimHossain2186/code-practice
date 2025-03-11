#include<stdio.h>

typedef struct
{
    double real, imaginary;
} complex;

int main(){

    complex c1, c2, sum;

    scanf("%lf %lf", &c1.real, &c1.imaginary);
    scanf("%lf %lf", &c2.real, &c2.imaginary);

    sum.real        = c1.real       + c2.real;
    sum.imaginary   = c1.imaginary  + c2.imaginary;
    
    printf("Result %.2lf + %.2lfi", sum.real, sum.imaginary);

    return 0;
}