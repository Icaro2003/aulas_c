#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char letter;
    float r1, r2, r3, test_avarage;

    printf("Digite uma letra\nA: M�dia Aritm�tica\nP: M�dia Ponderada\n");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'A':
        printf("Digite as notas: ");
        scanf("%f %f %f", &r1, &r2, &r3);
        test_avarage = (r1 + r2 + r3) / 3;
        printf("M�dia aritm�tica: %.2f\n", test_avarage);
        break;
    case 'P':
        printf("Digite as notas: ");
        scanf("%f %f %f", &r1, &r2, &r3);
        test_avarage = (r1 * 5 + r2 * 3 + r3 * 2) / 10;
        printf("M�dia ponderada: %.2f\n", test_avarage);
        break;
    default:
        printf("Digite uma das op��es do menu!\n");
        break;
    }

    system("pause");
    return 0;
}