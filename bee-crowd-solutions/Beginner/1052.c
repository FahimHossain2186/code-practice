#include <stdio.h>
 
int main() {
 
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int a;

    scanf("%i", &a);
    
    printf("%s\n", month[a - 1]);
 
    return 0;
}