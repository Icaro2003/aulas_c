#include <stdio.h>
#include <stdlib.h>

/*
    intervalo: -21.147
*/

int main()
{
    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x);

    // 4 * 8 = 32 bits

    system("pause");
    return 0;
}