#include <stdio.h>

int main()
{
    // questão 1
    int vet1[51];
    for (int i = 0; i < 51; i++)
    {
        vet1[i] = i + 100;
        printf("%d\n", vet1[i]);
    }

    printf("\n");

    // questão 3
    int vet2[137];
    int j = 0;
    for (int i = 0; i < 137; i++)
    {
        vet2[i] = j + 200;
        j += 2;
        printf("%d\n", vet2[i]);
    }

    // questão 3
    int vet3[5];
    printf("Digite 5 valores inteiros: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet3[i]);
        printf("%d\n", vet3[i]);
    }
}