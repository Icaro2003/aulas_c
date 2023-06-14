#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int cuboPorValor(int *nPtr);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    printf("%d³ = ", num);
    cuboPorValor(&num);
    printf("%d\n", num);

    system("pause");
    return 0;
}

int cuboPorValor(int *nPtr)
{
    *nPtr = pow(*nPtr, 3);
}