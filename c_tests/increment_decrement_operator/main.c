#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resutado, contador = 10;

    // resutado = contador++;
    // resutado = ++contador;
    resutado = contador--;
    resutado = --contador;

    printf("%d\n", resutado);
}