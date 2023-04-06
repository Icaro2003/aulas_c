#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 67)
    {
        printf("Pode doar sangue.\n");
    }
    else
    {
        printf("Não pode doar sangue.\n");
    }

    system("pause");
    return 0;
}