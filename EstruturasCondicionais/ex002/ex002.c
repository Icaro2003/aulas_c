#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("%d � divis�vel por 3.\n", num);
    }
    else
    {
        printf("%d n�o � divis�vel por 3.\n", num);
    }

    system("pause");
    return 0;
}