#include <stdio.h>
 
int main() {
 
    int x, y, count = 0;
    scanf("%d %d", &x ,&y);

    while(x<y){
        x++;
        if(x%2==1)
            count += x;
    }
    x--;
    while(x>y){
        if(x%2==1 || x%2==-1)
            count += x;
            x--;
    }

    printf("%d\n", count);
 
    return 0;
}