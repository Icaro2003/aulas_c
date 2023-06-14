#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void questao01(int v[12], int n);
void questao02(int n);
void questao03(int pass);
int questao04(int n, int res);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // questão 1
    // int values[12];
    // int num, i, j;

    // printf("Informe os 12 elementos:\n");

    // for (i = 0; i < 12; i++)
    // {
    //     scanf("%d", &values[i]);
    // }

    // printf("\nInforme um valor para buscar no vetor: ");
    // scanf("%d", &num);

    // questao01(values, num);

    // questão 2
    // int number;

    // printf("Informe o tamanho da matriz: ");
    // scanf("%d", &number);

    // questao02(number);

    // system("pause");
    // return 0;

    // questão 3



    // questão 4
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    printf("%d", questao04(num, 0));
}

void questao01(int v[12], int n)
{
    int cont[12];
    int is_true_false = 1;

    for (int i = 0; i < 12; i++)
    {
        if (n == v[i])
        {
            cont[i] = i;
        }
        else
        {
            cont[i] = -1;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        if (cont[i] >= 0)
        {
            printf("%d\t", cont[i]);
            is_true_false++;
        }
    }

    if (is_true_false <= 0)
    {
        printf("\nO número não foi encontrado!\n");
    }

    printf("\n");
}

void questao02(int n)
{
    int m[n][n], mt[n][n];
    int is_simetric = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Informe o elemento %dX%d da matriz: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mt[i][j] = m[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (m[i][j] != mt[i][j])
            {
                is_simetric = 0;
            }
        }
    }

    printf("\n");

    if (is_simetric != 0)
    {
        printf("A matriz é simétrica!\n");
    }
    else
    {
        printf("A matriz não é simétrica!\n");
    }
}

int questao04(int n, int res)
{
    int division = n / 10;
    int reverse = res * 10 + n % 10;
    
    if (division == 0)
    {
        return res * 10 + n % 10;
    }
    else
    {
        return questao04(division, reverse);
    }
}