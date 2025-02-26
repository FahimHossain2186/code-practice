#include <stdio.h>
 
int main() {
 
    int x[5];
    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%i %i %i %i %i", &x[0], &x[1], &x[2], &x[3], &x[4]);

    for(int i = 0; i < 5; i++){
        if(x[i]%2==0){
            even++;
        }else{
            odd++;
        }
        if(x[i]>0){
            positive++;
        }else if(x[i]<0){
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}