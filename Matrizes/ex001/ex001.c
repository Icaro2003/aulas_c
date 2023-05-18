#include <stdio.h>

int main()
{
    int m[3][5], i, j, sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Informe o elemento %d X %d da matriz: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n");

        for (j = 0; j < 5; j++)
        {
            sum += m[i][j];

            printf("%d\t", m[i][j]);
        }

        printf("\n");
    }

    printf("\nA soma dos elementos: %d\n", sum);

    return 0;
}