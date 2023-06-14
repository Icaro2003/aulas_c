#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int w = 32767;
    int x = 0;
    long double y = 25.5;
    double z = 0.2; 

    printf("Tamanho long long int: %Ld bytes\n", sizeof(w));
    printf("Tamanho int: %d bytes\n\n", sizeof(x));
    
    __mingw_printf("Valor de y: %Lf bytes\n", y);
    printf("Tamanho long double: %d bytes\n", sizeof(y));
    printf("Tamanho double: %d bytes\n", sizeof(z));

    system("pause");
    return 0;
}