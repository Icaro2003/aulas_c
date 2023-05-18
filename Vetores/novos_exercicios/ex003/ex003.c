#include <stdio.h>
#define N 10

int main()
{
    int vet_orginal[N], vet_inverted[N], i;

    for (i = 0; i < N; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &vet_orginal[i]);
    }

    for (i = 0; i < N; i++)
    {
        vet_inverted[i] = vet_orginal[N - i - 1];
        printf("%d\t", vet_inverted[i]);
    }

    return 0;
}