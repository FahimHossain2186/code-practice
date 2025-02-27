#include<stdio.h>

int main(){

    int x, y, sum = 0;
    scanf("%d", &x);
    while(1){
        scanf("%d", &y);
        if(y>0) break;
    }
    for(int i = 0; i<y; i++){
        sum += x + i;
    }
    printf("%d\n", sum);
    return 0;
}