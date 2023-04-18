#include <stdio.h>

int main()
{
    int idade, contador = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade >= 18)
        {
            contador++;
        }
    }

    printf("Quantidade de pessoas maiores de idade: %d\n", contador);
    
    return 0;
}