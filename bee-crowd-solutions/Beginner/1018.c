#include <stdio.h>
 
int main() {
    
    int x,y,z,a,b,c,d,e;
    
    scanf("%d", &x);
    printf("%d\n", x);
    
    y = x % 100;
    printf("%d nota(s) de R$ 100,00\n", (x-y)/100);
    
    z = y % 50;
    printf("%d nota(s) de R$ 50,00\n", (y-z)/50);
    
    a = z % 20;
    printf("%d nota(s) de R$ 20,00\n", (z-a)/20);
    
    b = a % 10;
    printf("%d nota(s) de R$ 10,00\n", (a-b)/10);
    
    c = b % 5;
    printf("%d nota(s) de R$ 5,00\n", (b-c)/5);
    
    d = c % 2;
    printf("%d nota(s) de R$ 2,00\n", (c-d)/2);
    
    e = d % 1;
    printf("%d nota(s) de R$ 1,00\n", (d-e)/1);
    
    return 0;
}