#include <stdio.h>
 
int main() {
 
    int a, b;

    scanf("%i %i", &a, &b);

    if(a>=b){
        b +=24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", b - a);
 
    return 0;
}