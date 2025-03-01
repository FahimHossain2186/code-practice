/*C program to convert days to years weeks and days*/

#include<stdio.h>

int main(){

    int days, temp;

    printf("Enter the count of Days:  ");
    scanf("%d", &days);

    temp = days/365;
    days %= 365;
    printf("Year count:  %d\n", temp);

    temp = days/30;
    days %= 30;
    printf("Month count:  %d\n", temp);
    printf("Day count:  %d\n", days);

    return 0;

}