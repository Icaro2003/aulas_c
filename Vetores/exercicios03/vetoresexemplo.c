#include <stdio.h>

int main()
{
    // questão 1
    int vet1[8], mult;
    printf("Digite oito valores inteiros: ");
    
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &vet1[i]);
        mult = vet1[i] * 2;
        printf("%d x 2 = %d\n", vet1[i], mult);
    }

    // questão 2
    int vet2[5], addition = 0;
    printf("Digite 5 valores inteiros: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet2[i]);
        addition += vet2[i];
    }

    printf("A soma dos valores: %d\n", addition);

    return 0;
}