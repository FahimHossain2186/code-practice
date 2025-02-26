#include<stdio.h>
#include<math.h>

int main(){

    float x;
    int a,b,c,d,e,f,g,h,i,j,k,l; 

    scanf("%f", &x);

    a = x / 100;
    x -= a * 100;
    b = x / 50;
    x -= b * 50;
    c = x / 20;
    x -= c * 20;
    d = x / 10;
    x -= d * 10;
    e = x / 5;
    x -= e * 5;
    f = x / 2;
    x -= f * 2;
    g = x / 1;
    x -= g;

    x = round(x * 100);  
    h = x / 50;
    x -= h * 50;
    i = x / 25;
    x -= i * 25;
    j = x / 10;
    x -= j * 10;
    k = x / 5;
    x -= k * 5;
    l = x / 1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);
  
}