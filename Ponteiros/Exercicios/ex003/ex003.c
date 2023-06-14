#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void changeValues(int *, int *);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Os valores de N1 e N2 são: %d %d\n", num1, num2);

    changeValues(&num1, &num2);

    printf("Os valores de N1 e N2 agora são: %d %d\n", num1, num2);
}

void changeValues(int *n1, int *n2)
{
    int change_n = *n1;
    *n1 = *n2;
    *n2 = change_n;
}