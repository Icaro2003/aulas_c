#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota bimestral: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota bimestral: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota bimestral: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota bimestral: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nA média aritmética do aluno é %.2f\n", media);

    system("pause");
    return 0;
}