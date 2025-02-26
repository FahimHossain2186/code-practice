#include <stdio.h>
 
int main() {
 
    int x=1;
    
    scanf("%d", &x);
    
    for(int i = 0; i <= x; i++){
        if(i%2==1)
            printf("%d\n", i);}
 
    return 0;
}