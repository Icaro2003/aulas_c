#include <stdio.h>

int main()
{
    int soma = 0;
    
    for (int i = 410; i <= 551; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("Soma: %d\n", soma);

    return 0;    
}