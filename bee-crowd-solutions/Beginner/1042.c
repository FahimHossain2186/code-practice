#include <stdio.h>
 
int main() {
 
    int a, b, c;
    
    // Read three integers
    scanf("%d %d %d", &a, &b, &c);
    
    // Determine the sorted order
    int first, second, third;
    
    if (a <= b && a <= c) {
        first = a;
        if (b <= c) {
            second = b;
            third = c;
        } else {
            second = c;
            third = b;
        }
    } else if (b <= a && b <= c) {
        first = b;
        if (a <= c) {
            second = a;
            third = c;
        } else {
            second = c;
            third = a;
        }
    } else {
        first = c;
        if (a <= b) {
            second = a;
            third = b;
        } else {
            second = b;
            third = a;
        }
    }
    
    // Print sorted values
    printf("%d\n%d\n%d\n", first, second, third);
    
    // Print a blank line
    printf("\n");
    
    // Print original values in the order they were read
    printf("%d\n%d\n%d\n", a, b, c);
 
    return 0;
}