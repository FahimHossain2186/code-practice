/*Write a C program to check whether an input alphabet is a vowel or a consonant using
switch case (assume that the input is an English letter).*/

#include<stdio.h>

int main(){

    char c;

    scanf("%c", &c);

    switch (c)
    {
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'a': case 'b': case 'c': case 'd': case 'e': 
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }
}