/*Write a C program to find Least Common Multiple (LCM) of two given numbers*/

#include<stdio.h>

int main(){

    int x, y, i = 1, j;

    scanf("%d %d", &x, &y);

    if(x>y){
        x += y;
        y = x - y;
        x -= y;
    }

    while(1){
        if ((x*i)%y == 0) break;
        i++;
    }

    j = x;

    while(1){
        if(x%j == 0 && y%j == 0) break;
        j--;
    }


    printf("LCM = %d\n", x*i);
    printf("GCD = %d\n", j);

    return 0;
}