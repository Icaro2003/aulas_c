#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void magicMatrix(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int number;
    do
    {
        printf("Defina o tamanho da matriz([x]X[x]): ");
        scanf("%d", &number);
    } while (number <= 1);

    magicMatrix(number);

    system("pause");
    return 0;
}

void magicMatrix(int n)
{
    int m[n][n], sum_lines[n], sum_cols[n], sum_main_d = 0, sum_secondary_d = 0;
    int i, j, is_magic;

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Informe o elemento da matriz [%d]X[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("\n");

        for (j = 0; j < n; j++)
        {
            printf("%d\t", m[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        sum_lines[i] = 0;
        sum_cols[i] = 0;

        for (j = 0; j < n; j++)
        {
            sum_lines[i] += m[i][j];
            sum_cols[i] += m[j][i];

            if (i == j)
            {
                sum_main_d += m[i][j];
            }

            if ((i + j) == n - 1)
            {
                sum_secondary_d += m[i][j];
            }
        }
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Soma linha %d: %d\n", i + 1, sum_lines[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Soma coluna %d: %d\n", i + 1, sum_cols[i]);
    }

    printf("\n");

    printf("Soma da diagonal principal: %d\n", sum_main_d);
    printf("Soma da diagonal secundária: %d\n", sum_secondary_d);

    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (sum_lines[i] == sum_cols[i] && sum_lines[i] == sum_main_d && sum_lines[i] == sum_secondary_d && sum_cols[i] == sum_main_d && sum_cols[i] == sum_secondary_d && sum_main_d == sum_secondary_d)
        {
            is_magic = 0;
        }
        else
        {
            is_magic = 1;
        }
    }

    if (is_magic == 0)
    {
        printf("A matriz é mágica!\n");
    }
    else
    {
        while (is_magic != 0)
        {
            printf("A matriz não é mágica!\n");
            break;
        }
    }
}