#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char c1, c2;

    printf("Digite um caracter: ");
    scanf("%c", &c1);

    scanf("%c");

    printf("Digite outro caracter: ");
    scanf("%c", &c2);

    system("pause");
    return 0;
}