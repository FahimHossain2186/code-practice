#include <stdio.h>
 
int main() {
 
    int x;
    
    scanf("%d", &x);
    
    for(int i = x; i < 12 + x; i++){
        if(i%2==1)
            printf("%d\n", i);}
 
    return 0;
}