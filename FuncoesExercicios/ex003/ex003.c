#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int expression(int i);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("O somatório é igual a: %d\n", expression(n));

    system("pause");
    return 0;
}

int expression(int i)
{
    int result;

    if (i == 1)
    {
        result = 3;
    }
    else
    {
        result = ((i * i) + 2) + expression(i - 1);
    }

    return result;
}