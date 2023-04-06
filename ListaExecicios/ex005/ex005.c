#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qtdprodutos;
    float totalpagar;
    printf("Você está em uma loja de R$ 1,99!\n");
    printf("Vai levar quantos produtos? ");
    scanf("%d", &qtdprodutos);

    totalpagar = qtdprodutos * 1.99;
    printf("Valor total: R$ %.2f\n", totalpagar);
    
    system("pause");
    return 0;
}