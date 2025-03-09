#include <stdio.h>

int main()
{

    int M, N, check = 0;

    scanf("%d %d", &M, &N);

    int arr[M][N];

    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j < N; j++)
        {

            if (arr[i][j] == x)
            {

                check = 1;
                printf("Element %d found at position (%d,%d)\n", x, i, j);

                break;
            }
        }
    }

    if (check == 0)
        {

            printf("Element not found.");

            return 0;
        }
        
}