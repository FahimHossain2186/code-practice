#include <stdio.h>
 
int main() {
 
    int w, x, y, z, a, b, c, d, p, q, r;

    scanf("Dia %d", &w);
    scanf("%d : %d : %d", &x, &y, &z);
    scanf(" Dia %d", &a);
    scanf("%d : %d : %d", &b, &c, &d);

    p = (a*86400 + b*3600 + c*60 + d)-(w*86400 + x*3600 + y*60 + z);
    q = p / 86400;
    printf("%d dia(s)\n", q);
    p -= q * 86400;
    q = p / 3600;
    printf("%d hora(s)\n", q);
    p -= q * 3600;
    q = p / 60;
    printf("%d minuto(s)\n", q);
    p -= q * 60;
    printf("%d segundo(s)\n", p);
 
    return 0;
}