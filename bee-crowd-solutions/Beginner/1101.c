#include <stdio.h>
 
int main() {
 
    int y, z, sum=0;

    while(1){
        
        scanf("%d %d", &y, &z);
        
        if(y <= 0 || z <= 0)
            break;
        
        if(y>z){
            y = y + z;
            z = y - z;
            y -= z;
        }
        
        while(y<=z){
            printf("%d ", y);
            sum += y;
            y++;
        }
        
        printf("Sum=%d\n", sum);
        sum=0;
        
    }
    return 0;
}