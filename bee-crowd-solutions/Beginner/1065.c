#include <stdio.h>
 
int main() {
 
    int x[5];
    int count = 0;

    scanf("%i %i %i %i %i", &x[0], &x[1], &x[2], &x[3], &x[4]);

    for(int i = 0; i < 5; i++){
        if(x[i]%2==0){
            count++;
        }
    }
    printf("%d valores pares\n", count);
    
    return 0;
}