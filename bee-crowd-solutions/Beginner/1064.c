#include <stdio.h>
 
int main() {
 
    float x[6], sum = 0;
    int count = 0;

    scanf("%f %f %f %f %f %f", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5]);

    for(int i = 0; i < 6; i++){
        if(x[i]>0){
            count++;
            sum +=x[i];
        }
    }
    printf("%d valores positivos\n%.1f\n", count, sum/count);
    
 
    return 0;
}