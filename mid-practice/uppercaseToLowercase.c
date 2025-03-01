/* Write a program that converts an uppercase letter to lowercase.*/

#include<stdio.h>

int main(){

    char a;
    printf("Uppercase:\t");
    scanf("%c", &a);
    printf("Lowercase:\t%c", a+32);

    return 0;
}