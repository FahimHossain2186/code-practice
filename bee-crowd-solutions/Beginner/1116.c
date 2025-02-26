#include <stdio.h>
 
int main() {
 
    int x; float y, z;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%f %f", &y, &z);

        if(z==0){
            printf("divisao impossivel\n");
            continue;
        }

        printf("%.1f\n", y/z);
    }
 
    return 0;
}