#include <stdio.h>
#include <stdlib.h>

void doubleWithReference(int *nPtr);

int main()
{
    int num;
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    printf("%d x 2 = ", num);
    doubleWithReference(&num);
    printf("%d\n", num);

    system("pause");
    return 0;
}

void doubleWithReference(int *nPtr)
{
    *nPtr *= 2;
}