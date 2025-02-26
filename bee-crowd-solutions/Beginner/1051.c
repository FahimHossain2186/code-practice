#include <stdio.h>
 
int main() {
 
    float a;

    scanf("%f", &a);
    
    if(a <= 2000){
        printf("Isento\n");
    }else if(a <= 3000){
        printf("R$ %.2f\n", (a - 2000)*.08 );
    }else if(a <= 4500){
        printf("R$ %.2f\n", (a - 3000)*.18 + 1000 * .08);
    }else{
        printf("R$ %.2f\n", (a - 4500)*.28 + 1500 * .18 + 1000 * .08);
    }

 
    return 0;
}