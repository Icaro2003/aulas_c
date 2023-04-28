#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int n);

int main()
{
    int num, fat;

    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    fat = fatorial(num);
    printf("%d! = %d\n", num, fat);

    system("pause");
    return 0;
}

int fatorial(int n)
{
    int fat;

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        fat = n * fatorial(n - 1);
        return fat;
    }
}