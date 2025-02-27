#include <stdio.h>

int main(){

    int x, y, sum = 0;

    scanf("%d %d", &x, &y);

    if(x>y){
        x += y;
        y = x - y;
        x -= y;
    }

    for(int i = x; i<=y; i++){

        if(i%13 == 0) continue;

        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}