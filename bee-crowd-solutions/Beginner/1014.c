#include <stdio.h>
 
int main() {
    
    int km;
    float lt;
    
    scanf("%i %f",&km, &lt);
    
    printf("%.3f km/l\n", km/lt);
 
    return 0;
}