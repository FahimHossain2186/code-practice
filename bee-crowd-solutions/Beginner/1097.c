#include <stdio.h>
 
int main() {
 
    int j = 7;

    for(int i = 01; i<=9; i+=2){
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j);
        j--;
        printf("I=%d J=%d\n", i, j); 
        j+=4;
    }
 
    return 0;
}