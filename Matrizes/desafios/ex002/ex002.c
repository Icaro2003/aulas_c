#include <stdio.h>

void printDraw(int);

int main()
{
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("\nReceba um desenho :)\n");

    printDraw(num);
}

void printDraw(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}