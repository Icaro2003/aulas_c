#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifyValue(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("\nO número informado pode ser:\n1 - positivo\n2 - negativo\n3 - neutro\n\n");

    printf("%d\n", verifyValue(num));

    system("pause");
    return 0;
}

int verifyValue(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}