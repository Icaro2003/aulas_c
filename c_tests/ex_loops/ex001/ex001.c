#include <stdio.h>

int main()
{
    // tabuada
    int n, i;
    do
    {
        printf("Informe um valor e veja sua tabuada: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}