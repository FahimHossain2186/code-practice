#include <stdio.h>
 
int main() {
 
    float a, b, c, ans1, ans2;

    scanf("%f %f %f", &a, &b, &c);

    ans1 = ((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);
    ans2 = ((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);

    if(a == 0 || pow(b,2)-4*a*c < 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5f\n", ans1);
        printf("R2 = %.5f\n", ans2);
    }
 
    return 0;
}