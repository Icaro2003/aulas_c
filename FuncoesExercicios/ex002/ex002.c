#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char letter;
    float r1, r2, r3, test_avarage;

    printf("Digite uma letra\nA: Média Aritmética\nP: Média Ponderada\n");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'A':
        printf("Digite as notas: ");
        scanf("%f %f %f", &r1, &r2, &r3);
        test_avarage = (r1 + r2 + r3) / 3;
        printf("Média aritmética: %.2f\n", test_avarage);
        break;
    case 'P':
        printf("Digite as notas: ");
        scanf("%f %f %f", &r1, &r2, &r3);
        test_avarage = (r1 * 5 + r2 * 3 + r3 * 2) / 10;
        printf("Média ponderada: %.2f\n", test_avarage);
        break;
    default:
        printf("Digite uma das opções do menu!\n");
        break;
    }

    system("pause");
    return 0;
}