/*Write a C program to enter month number and print number of days in month*/

#include <stdio.h>

int main(){

    int month;

    printf("Enter the month Number: ");
    scanf("%d", &month);

    while(month>12 || month<0){
        printf("Invalid Input.\nPlease try again");
        printf("\nEnter the month Number: ");
        scanf("%d", &month);
    }
    if(month == 2) printf("Number of days:  28\n");
    else if(month == 4 || month == 6 || month == 9 || month == 11) printf("Number of days:  30\n");
    else printf("Number of days:  31\n");

    return 0;
}