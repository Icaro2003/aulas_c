#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    system("pause");
    return 0;
}