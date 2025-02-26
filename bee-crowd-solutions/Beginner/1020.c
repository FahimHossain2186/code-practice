#include <stdio.h>
 
int main() {
 
    int x,y,z;
    
    scanf("%d", &x);
    
    y = x / 365;
    z = (x - (y * 365))/30; 
    x = x - (y * 365) - (z * 30);
    
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", z);
    printf("%d dia(s)\n", x);
    
    return 0;
}