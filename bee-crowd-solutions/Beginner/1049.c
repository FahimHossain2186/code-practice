#include <stdio.h>
 
int main() {
 
    char a[25], b[25], c[25];

    scanf("%s %s %s", a, b, c);

    if(strcmp(a, "vertebrado") == 0){
        if(strcmp(b, "ave") == 0){
            if(strcmp(c, "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");  
        }else
            if(strcmp(c, "herbivoro") == 0)
                printf("vaca\n");
            else
                printf("homem\n"); 
    }else{
        if(strcmp(b, "inseto") == 0){
            if(strcmp(c, "herbivoro") == 0)
                printf("lagarta\n");
            else
                printf("pulga\n");  
        }else
            if(strcmp(c, "onivoro") == 0)
                printf("minhoca\n");
            else
                printf("sanguessuga\n"); 
    }
 
    return 0;
}