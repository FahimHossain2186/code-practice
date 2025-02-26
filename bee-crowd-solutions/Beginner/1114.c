#include <stdio.h>
 
int main() {
 
    int y;

    while(1){
        scanf("%d", &y);
        if(y == 2002)
            break;
        printf("Senha Invalida\n");
    }
        printf("Acesso Permitido\n");
 
    return 0;
}