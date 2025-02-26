#include <stdio.h>
 
int main() {
 
    int y, z;

    while(1){

        scanf("%d %d", &y, &z);

        if(y<z)
            printf("Crescente\n");
        else if(y>z)
            printf("Decrescente\n");
        else if(y==z)
            break;
    }
    return 0;
}