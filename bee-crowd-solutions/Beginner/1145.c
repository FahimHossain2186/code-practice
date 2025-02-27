#include<stdio.h>

int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    for(int i = 1; i<=y; i+=x){

        for(int j = i; j<x+i; j++){
            
            if(j%x == 0) printf("%d", j);
            else printf("%d ", j);
            
        }
        printf("\n");
    }
    return 0;
}