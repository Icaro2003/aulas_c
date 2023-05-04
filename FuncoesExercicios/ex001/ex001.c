#include <stdio.h>

int main()
{
    int n, mod;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        mod = n * (-1);
    } else {
        mod = n;
    }

    printf("%d", mod);
}