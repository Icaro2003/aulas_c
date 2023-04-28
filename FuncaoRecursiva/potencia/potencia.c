#include <stdio.h>
#include <stdlib.h>

int potencia(int k, int n);

int main()
{
    int k, n, p;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &k, &n);

    p = potencia(k, n);

    printf("%d^%d = %d", k, n, p);

    return 0;
}

int potencia(int k, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        int p = k * potencia(k, n - 1);
        return p;
    }
}