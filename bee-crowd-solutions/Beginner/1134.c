#include<stdio.h>

int main(){

    int x, fuel = 0, gasoline = 0, diesel = 0;
    while(1){
        
        scanf("%d", &x);
    
        if(x == 4) break;
        else if(x == 1) fuel++;
        else if(x == 2) gasoline++;
        else if(x == 3) diesel++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", fuel, gasoline, diesel);

    return 0;
}