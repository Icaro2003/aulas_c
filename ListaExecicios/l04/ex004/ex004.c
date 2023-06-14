#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int bigVal(int v[3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int values[3];

    printf("Informe um valor inteiro:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &values[i]);
    }

    printf("O maior valor é: %d\n", bigVal(values));

    system("pause");
    return 0;
}

int bigVal(int v[3])
{
    int big;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            big = v[i];
        }
        else if (v[i] > big)
        {
            big = v[i];
        }
    }

    return big;
}