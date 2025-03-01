/*Write a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2*/

#include<stdio.h>

int main(){

    int x = 1, n, sum = 0;

    scanf("%d", &n);

    for (int i = 5; i<=n; i += 2*(x)){
        sum += i*i;
        x++;
    }

    printf("Sum = %d", sum);

    return 0;
}