#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int x = 32767;
    int y = 0;

    printf("Tamanho short int: %d bytes\n", sizeof x);
    printf("Tamanho int: %d bytes\n", sizeof y);

    system("pause");
    return 0;
}