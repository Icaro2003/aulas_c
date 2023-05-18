#include <stdio.h>
#include <stdlib.h>

#define N 2

int main()
{
    int a[N][N];
    int b[N][N];
    int c[N][N];
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Informe um elemento da matriz A: ");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Informe um elemento da matriz B: ");
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nA soma das matrizes:");

    for (i = 0; i < N; i++)
    {
        printf("\n");

        for (j = 0; j < N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        
        printf("\n");
    }

    system("pause");
    return 0;
}