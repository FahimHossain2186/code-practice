/*Write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3*/

#include<stdio.h>
#include<math.h>

int main(){

    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 2; i<=n; i += 3){
        sum += pow(i, 3);
    }

    printf("Sum = %d", sum);

    return 0;
}