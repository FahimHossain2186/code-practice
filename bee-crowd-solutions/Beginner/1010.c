#include <stdio.h>
 
int main() {
 
    int A, B, D, E;
    float C, F;
    
    scanf("%i %i %f", &A, &B, &C);
    scanf("%i %i %f", &D, &E, &F);

    printf("VALOR A PAGAR: R$ %.2f\n", B * C + E * F);
    
    return 0;
}