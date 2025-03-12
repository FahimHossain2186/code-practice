#include <stdio.h>

int main()
{
    int x, n1 = 1, n2 = 1, temp;
    scanf("%d", &x);

    if (x == 1)
        printf("0 ");
    else if (x == 2)
        printf("0 1 ");
    else if (x >= 3)
        printf("0 1 1 ");

    for (int i = 4; i <= x; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        if (i == x)
            printf("%d\n", temp);
        else
            printf("%d ", temp);
    }

    return 0;
}