/*Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. 
Calculate and print the average of all positive integers entered. */

#include<stdio.h>

int main(){

    int x, count = 0, sum = 0;

    do{
        scanf("%d", &x);
        if (x > 0) { 
            sum += x;
            count++;
        }
    }while(x != 0);

    if (count > 0)
        printf("Average = %.2f\n", (float)sum / count);
    else
        printf("No positive numbers were entered.\n");
    
        return 0;
}