#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float v[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("O endereço do elemento %dX%d: %p\n", i, j, &v[i][j]);
        }
    }

    system("pause");
    return 0;
}