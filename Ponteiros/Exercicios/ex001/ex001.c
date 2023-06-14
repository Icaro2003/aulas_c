#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, *maior;

    printf("Informe 2 valores inteiros: ");
    scanf("%d %d", &n1, &n2);

    if (&n1 > &n2)
    {
        maior = &n1;
    }
    else
    {
        maior = &n2;
    }

    printf("O maior endereço de memória contém: %d", *maior);

    return 0;
}