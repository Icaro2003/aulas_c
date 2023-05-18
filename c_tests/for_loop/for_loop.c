#include <stdio.h>

int main()
{
    int i, j, resto, cont;

    // incremento
    for (i = 0; i <= 10; i++)
    {
        printf("%d\t", i);
    }

    printf("\n\n");

    // decremento
    for (i = 10; i >= 0; i--)
    {
        printf("%d\t", i);
    }

    printf("\n\n");

    // imprimir números primos de 1 a 100
    for (i = 1; i <= 100; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}