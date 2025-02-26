#include <stdio.h>
 
int main() {
    double R, area;
    const double PI = 3.14159;

    // Read the radius value
    scanf("%lf", &R);

    // Calculate the area
    area = PI * R * R;

    // Print the result with four decimal places
    printf("A=%.4lf\n", area);

    return 0;
}