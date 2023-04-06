#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media, mediafinal;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7) {
        printf("Aprovado");
    } else 

    system("pause");
    return 0;
}