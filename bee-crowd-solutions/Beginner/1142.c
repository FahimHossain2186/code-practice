#include<stdio.h>

int main(){

    int x;

    scanf("%d", &x);

    for(int i = 1; i<=x; i++){
        for(int y = 4*(i-1)+1; y<4 * i; y++){
            printf("%d ", y);
        }
        printf("PUM\n");
    }
    return 0;
}