#include <stdio.h>
 
int main() {
 
    int x, y;

    float z[] = {4, 4.5, 5, 2, 1.5};

    scanf("%d %d", &x, &y);

    printf("Total: R$ %.2f\n", y * z[x-1]);
 
    return 0;
}