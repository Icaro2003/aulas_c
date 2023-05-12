#include <stdio.h>

int main()
{
    char key;
    printf("Digite um caracter: ");
    key = getc(stdin);

    printf("Caracter digitado: %c\n", key);

    return 0;
}