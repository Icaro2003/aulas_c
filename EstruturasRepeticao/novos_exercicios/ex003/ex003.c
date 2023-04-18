#include <stdio.h>

int main()
{
    int n, soma = 0;

    do
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);

        soma += n;
        
    } while (n != 0);

    printf("Soma dos valores: %d", soma);

    return 0;
}