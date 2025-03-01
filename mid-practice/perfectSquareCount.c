#include<stdio.h>
#include<math.h>

int main(){

    int x, y, count = 0;

    scanf("%d %d", &x, &y);

    for(int i = x; i<y; i++){
        if(sqrt(i) == (int)sqrt(i)) count++;
    }

    printf("%d", count);

    return 0;
}