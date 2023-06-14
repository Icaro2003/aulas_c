#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int smallVal(int v[3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int values[3];

    printf("Informe um valor inteiro: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &values[i]);
    }

    printf("O menor valor é: %d\n", smallVal(values));

    system("pause");
    return 0;
}

int smallVal(int v[3])
{
    int small;
    
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            small = v[i];
        }
        else if (v[i] < small)
        {
            small = v[i];
        }
    }

    return small;
}