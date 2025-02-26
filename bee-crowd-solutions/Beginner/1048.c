#include <stdio.h>
 
int main() {
 
    float a, b;
    char c = '%';

    scanf("%f", &a);

    if(a<=400)
        b = .15;
    else if(a<=800)
        b = .12;
    else if(a<=1200)
        b = .1;
    else if(a<=2000)
        b = .07;
    else
        b = .04;

    printf("Novo salario: %.2f\n", a + a * b);
    printf("Reajuste ganho: %.2f\n", a * b);
    printf("Em percentual: %.0f %c\n", b * 100, c);
 
    return 0;
}