#include <stdio.h>
 
int main() {
 
    int x, highest=0, numCount=0;

    for(int i = 0; i < 100; i++){
        scanf("%d", &x);    
        
        if(x>highest){
            highest = x;
            numCount = i + 1;
        }
    }

    printf("%d\n%d\n", highest, numCount);

    return 0;
}