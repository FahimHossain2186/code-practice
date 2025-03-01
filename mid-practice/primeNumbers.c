/*Write a C program to print all prime numbers between 1 and n in reverse order (n is an input)*/

#include <stdio.h>

void prime(int x){

    int i;

    for(i = 2; i <= x; i++)        if(x % i == 0) break;

    if(x == i) printf("%d ", x);

}

int main(){

    int x;

    printf("Enter n: ");
    scanf("%d", &x);

    for(int i = x; i > 1; i--) prime(i);
    
    return 0;
}