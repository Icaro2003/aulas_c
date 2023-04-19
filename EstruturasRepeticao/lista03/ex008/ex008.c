#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, soma = 0, produto = 1;

    do
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &n);
        printf("\n");

        if (n <= 0)
        {
            break;
        }
        else
        {
            if (n % 2 == 0)
            {
                soma += n;
            }
            else
            {
                produto *= n;
            }
        }
    } while (n > 0);

    printf("Produto dos ímpares: %d\n", produto);
    printf("Soma dos pares: %d\n", soma);

    system("pause");
    return 0;
}