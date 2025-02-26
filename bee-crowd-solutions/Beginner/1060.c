#include <stdio.h>
 
int main() {
 
    int i = 0, count = 0;
    float x[6];

    scanf("%f %f %f %f %f %f", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5]);

    while(i<6){
        if(x[i]>0)
            count++;
        i++;
    }
    printf("%d valores positivos\n", count);
 
    return 0;
}