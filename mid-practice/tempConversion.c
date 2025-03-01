/*Read a temperature in Celsius and print its Fahrenheit equivalent (Hint: C=(F-32)*5/9)*/

#include<stdio.h>

int main(){

    float celsius;

    printf("Enter the value in Celcious:\t");
    scanf("%f", &celsius);

    printf("Fahrenheit equivalent: %.3f", (9*celsius)/5 + 32);
    
    return 0;
}