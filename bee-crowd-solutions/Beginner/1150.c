#include<stdio.h>

int main(){

    int x, y, sum = 0, count = 0;
    scanf("%d", &x);
    
    while(1){
        scanf("%d", &y);
        if(y>x) break;
    }

    for (int i = x; sum < y; i++){
        sum += i;
        count++;
    }

    printf("%d\n", count);
    return 0;
}