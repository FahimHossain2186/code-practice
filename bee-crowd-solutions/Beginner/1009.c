#include <stdio.h>

int main(){

    char name[100];
    float salary, total;
    
    scanf("%s %f %f", name, &salary, &total);

    printf("TOTAL = R$ %.2f\n", salary + total * .15);
    
    return 0;
    
}    