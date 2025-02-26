#include <stdio.h>
 
int main() {
    int a;
    scanf("%d", &a);

    for(int i = 01; i <= a; i++){
        
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, i*i);
        } 
    }

    return 0;
}