#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, min, max, ALEATORIO, escolha;
    printf("Pense em um número!\n");
    printf("Pensou?\n");
    printf("Caso o número seja maior que o sugerido, digite: 1\n");
    printf("Caso o número seja menor que o sugerido, digite: 2\n");
    printf("Caso o número seja menor que o sugerido, digite 3\n\n");

    do
    {
        printf("O número é maior, menor ou igual a %d: ", aleatorio);
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
            printf("Escolha uma das opções fornecidas no menu!\n");
            break;
        }
    } while (escolha != 3);

    printf("O número pensado é: %d\n", n);

    system("pause");
    return 0;
}