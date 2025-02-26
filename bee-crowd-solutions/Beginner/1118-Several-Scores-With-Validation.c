#include <stdio.h>
#include <stdlib.h>

void func()
{

    float x, y = 0;
    int a = 0;

    while (1)
    {
        scanf("%f", &x);

        if (x >= 0 && x <= 10)
        {
            y += x;
            break;
        }
        printf("nota invalida\n");
    }
    while (1)
    {
        scanf("%f", &x);

        if (x >= 0 && x <= 10)
        {
            y += x;
            break;
        }
        printf("nota invalida\n");
    }

    printf("media = %.2f\n", y / 2);

    while (a != 1 && a != 2) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &a);
        if (a == 1) {
            func();  // Recursively call the function
        }
    }
    
}

int main()
{
    func();
    return 0;
}