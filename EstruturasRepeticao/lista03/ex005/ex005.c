#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    system("pause");
    return 0;
}