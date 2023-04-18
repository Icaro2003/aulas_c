#include <stdio.h>

int main()
{
    float n, operacao = 0;
    int escolha;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("\n");
    printf("1 - triplo de um número\n");
    printf("2 - 15%% de um número\n");
    printf("3 - cubo de um número\n");
    printf("4 - sair\n");
    scanf("%d", &escolha);
    
    while (escolha != 4)
    {
        switch (escolha)
        {
        case 1:
            operacao = n * 3;
            printf("%d x 3", operacao);
            break;
        case 2:
            n += n * 0.15;
            operacao = n;
            printf("15%% %d = %d", n, operacao);
            break;
        case 3:
            operacao = n * 3;
            printf("%d³ = %d", n, operacao);
            break;
        case 4:
            printf("Saindo...");
        default:
            printf("Escolha inválida!\n");
            break;
        }
    }
}