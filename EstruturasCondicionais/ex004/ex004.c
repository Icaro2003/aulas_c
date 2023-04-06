#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int gol1, gol2;
    printf("Digite o placar do jogo: ");
    scanf("%d %d", &gol1, &gol2);

    printf("Placar: %d X %d\n", gol1, gol2);

    if (gol1 == gol2)
    {
        printf("Empate\n");
    }
    else if (gol1 > gol2)
    {
        printf("Vitória do primeiro time.\n");
    }
    else
    {
        printf("Vitória do segundo time.\n");
    }
    
    system("pause");
    return 0;
}