#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonnaci(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, n_fib;

    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);

    n_fib = fibonnaci(n);
    printf("O %dº termo é: %d\n", n, n_fib);

    system("pause");
    return 0;
}

int fibonnaci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}