#include <stdio.h>
#include <math.h>

int main()
{

    float j = 1;

    for (float i = 0; i <= 2.1; i += .2)
    {

        if ((i > -.1 && i < .1) || (i > .9 && i < 1.1) || (i > 1.9 && i < 2.1))
        {
            printf("I=%.0f J=%.0f\n", i, j);
            j++;
            printf("I=%.0f J=%.0f\n", i, j);
            j++;
            printf("I=%.0f J=%.0f\n", i, j);
            j -= 1.8;
        }
        else
        {
            printf("I=%.1f J=%.1f\n", i, j);
            j++;
            printf("I=%.1f J=%.1f\n", i, j);
            j++;
            printf("I=%.1f J=%.1f\n", i, j);
            j -= 1.8;
        }
    }

    return 0;
}