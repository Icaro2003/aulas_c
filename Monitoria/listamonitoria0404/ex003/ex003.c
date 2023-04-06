#include <stdio.h>

int main()
{
    float produto, desconto;
    printf("Valor do produto: ");
    scanf("%f", &produto);

    desconto = produto - (produto * 0, 12);

    printf("O produto de R$ %.2f, com desconto fica no valor de: R$ %.2f", produto, desconto);
}