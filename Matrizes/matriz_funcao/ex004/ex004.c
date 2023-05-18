#include <stdio.h>
#include <stdlib.h>

void identitySquareMatrix(int n);

int main()
{
    int number;
    printf("Para montar a matriz, informe um valor inteiro: ");
    scanf("%d", &number);

    identitySquareMatrix(number);

    system("pause");
    return 0;
}

void identitySquareMatrix(int n)
{
    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }

            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}