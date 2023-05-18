#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float investimento(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int meses;
    printf("Informe quantos meses você investiu: ");
    scanf("%d", &meses);

    printf("Seu total acumulado durante %d meses: %.2f\n", meses, investimento(meses));

    system("pause");
    return 0;
}

float investimento(int n)
{
    int xa;

    if (n == 0)
    {
        xa = 1000;
    }
    else
    {
        xa = 1.007 * investimento(n - 1);
    }

    return xa;
}