#include <stdio.h>

int main()
{
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    printf("Valor original: %d; Antecessor: %d; Sucessor: %d", num, num - 1, num + 1);

    return 0;
}