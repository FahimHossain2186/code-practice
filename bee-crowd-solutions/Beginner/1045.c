#include <stdio.h>
 
int main() {
    double A, B, C, temp;

    // Reading the input
    scanf("%lf %lf %lf", &A, &B, &C);

    // Sorting A, B, C in decreasing order using bubble sort
    if (A < B) { temp = A; A = B; B = temp; }
    if (A < C) { temp = A; A = C; C = temp; }
    if (B < C) { temp = B; B = C; C = temp; }

    // Check if it forms a triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        // Checking the type of triangle
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A * A < B * B + C * C) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((A == B && B != C) || (A == C && B != C) || (B == C && A != B)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}