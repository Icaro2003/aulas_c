#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcDelta(int c[3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int coeficients[3];

    printf("Informe os coeficientes da equação('a', 'b' e 'c'): ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &coeficients[i]);
    }

    printf("O valor de delta é: %d\n", calcDelta(coeficients));

    system("pause");
    return 0;
}

int calcDelta(int c[3])
{
    int delta = (c[1] * c[1]) - 4 * c[0] * c[2];

    return delta;
}