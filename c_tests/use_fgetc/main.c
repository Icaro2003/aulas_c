#include <stdio.h>

int main()
{
    char key;
    printf("Digite um caracter: ");
    key = fgetc(stdin);

    printf("Caracter digitado: %c\n", key);

    return 0;
}