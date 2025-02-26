#include <stdio.h>
 
int main() {
 
    float a, b, c, d;
    int z;

    scanf("%f %f %f %f", &a, &c, &b, &d);

    a += c / 60;
    b += d / 60;

    if(a>=b){
        b +=24;
    }

    z = b - a;

    printf("O JOGO DUROU %d HORA(S) E %.0f MINUTO(S)\n", z, (b - a - z)*60);
    return 0;
}