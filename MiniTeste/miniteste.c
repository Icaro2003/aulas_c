#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, min, max, ALEATORIO, escolha;
    printf("Pense em um n�mero!\n");
    printf("Pensou?\n");
    printf("Caso o n�mero seja maior que o sugerido, digite: 1\n");
    printf("Caso o n�mero seja menor que o sugerido, digite: 2\n");
    printf("Caso o n�mero seja menor que o sugerido, digite 3\n\n");

    do
    {
        printf("O n�mero � maior, menor ou igual a %d: ", aleatorio);
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            min = aleatorio + 1;
            n = aleatorio;
            break;

        case 2:
            max = aleatorio - 1;
            n = aleatorio;
            break;

        case 3:
            printf("FINALMENTE!!! :D\n");
            break;
        default:
            printf("Escolha uma das op��es fornecidas no menu!\n");
            break;
        }
    } while (escolha != 3);

    printf("O n�mero pensado �: %d\n", n);

    system("pause");
    return 0;
}