#include <stdio.h>

int main()
{
    int n;

    // while(){}
    // printf("Digite um valor inteiro e maior que zero: ");
    // scanf("%d", &n);

    // while(n <= 0)
    // {
    //     printf("Valor incorreto! Digite novamente: ");
    //     scanf("%d", &n);
    // }

    // do{} while()
    do
    {
        printf("Digite um valor inteiro e maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Valor digitado: %d\n", n);

    return 0;
}