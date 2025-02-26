#include <stdio.h>

int main() {
 
    int x,y,z;
    
    scanf("%d",&x);
    
    y=x%60;
    z=(x/60)%60;
    
    printf("%d:%d:%d\n",x/3600,z,y);
 
    return 0;
}