#include <stdio.h>
 
int main() {
 
    float a, b, c, d, e;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float media = (a*2 + b*3 + c*4 + d)/10;

    printf("Media: %.1f\n", media);

    if(media>7)
        printf("Aluno aprovado.\n");
    else if(media<5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");

        printf("Nota do exame: ");
        scanf("%f", &e);
        printf("%.1f\n", e);
        e = (media + e)/2;

        if (e>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", e);
    }
 
    return 0;
}