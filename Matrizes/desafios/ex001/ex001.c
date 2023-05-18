#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
    int m1[ROWS][COLS], sum_cols[COLS];
    int i, j;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Informe um elemento da matriz: ");
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        printf("\n");
        for (j = 0; j < COLS; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int j = 0; j < COLS; j++)
    {
        sum_cols[j] = 0;

        for (int i = 0; i < ROWS; i++)
        {
            sum_cols[j] += m1[i][j];
        }
    }

    for (int i = 0; i < COLS; i++)
    {
        printf("Soma Coluna %d = %d\n", i + 1, sum_cols[i]);
    }

    return 0;
}