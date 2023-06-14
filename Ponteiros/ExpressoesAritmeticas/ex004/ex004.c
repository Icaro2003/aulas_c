#include <stdio.h>
#include <stdlib.h>

int soma(int, int);
int operacao(int, int, int(*) (int, int));

int main()
{
    int m;
    m = operacao(8, 2, soma);

    printf("%d\n", m);
}

int soma(int x, int y)
{
    return x + y;
}

int operacao(int x, int y, int(*func)(int, int))
{
    
}