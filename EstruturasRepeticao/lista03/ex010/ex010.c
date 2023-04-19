#include <stdio.h>

int main()
{
    int num, maior, menor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    for (int i = 1; i < 10; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }
        else if (num < menor)
        {
            menor = num;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}