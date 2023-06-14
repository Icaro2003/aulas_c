#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int cont = 5;
    int *contPtr = &cont;

    printf("Valor cont: %d\n", cont);
    printf("Valor contPtr: %d\n", *contPtr);
    printf("Valor do ponteiro contPtr: %p\n", contPtr);
    printf("Endereço de cont: %p\n", &cont);
}