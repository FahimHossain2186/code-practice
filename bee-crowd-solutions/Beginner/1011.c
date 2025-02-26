#include <stdio.h>
#include <math.h>
 
int main() {
 
    double r, pi = 3.14159;
    
    scanf("%lf", &r);
    
    printf("VOLUME = %.3lf\n", (4.0/3) * pi * r * r * r);
 
    return 0;
}