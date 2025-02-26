#include <stdio.h>

int main()
{
    int x, y, z, sum = 0;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &y, &z);

        if(y>z){
            y = y + z;
            z = y - z;
            y -= z;
        }

        for(int a = y + 1; a>y && a<z; a++){
            if(a%2 == 1)
                sum+=a;
        }

        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}
