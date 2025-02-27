#include <stdio.h>
#include <math.h>

int main(){

    int x;

    scanf("%d", &x);

    for(int i = 1; i<=x; i++){
        for(int y = 1; y<=3; y++){
            if (y == 3) // Last number in the row, no space
                printf("%.0f", pow(i, y));
            else
                printf("%.0f ", pow(i, y)); 
        }
        printf("\n");
    }
    return 0;
}