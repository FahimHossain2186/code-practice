#include <stdio.h>
 
int main() {
 
    int a;
    float x, y, z;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        scanf("%f %f %f", &x, &y, &z);    
        printf("%.1f\n", (x*2+y*3+z*5)/10);
    }
    return 0;
}