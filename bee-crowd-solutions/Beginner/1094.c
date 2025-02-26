#include <stdio.h>

int main()
{
    int x, var, c = 0, r = 0, s = 0;
    float total;
    char name;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d %c", &var, &name);

        if (name == 'C')
            c += var;
        else if(name == 'R')
            r += var;
        else if(name == 'S')
            s += var;
    }

    total = c+r+s;
    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", c*100/total);
    printf("Percentual de ratos: %.2f %%\n", r*100/total);
    printf("Percentual de sapos: %.2f %%\n", s*100/total);

    return 0;
}
