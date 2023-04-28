#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int verificaParImpar(int);
int verificaParImpar(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float distanciaDoisPontos(float, float, float, float);
float distanciaDoisPontos(float x1, float x2, float y1, float y2)
{
    float operacao_x = pow((x2 - x1), 2);
    float operacao_y = pow((y2 - y1), 2);
    float dab = sqrt((operacao_x + operacao_y));

    return dab;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("%d\n\n", verificaParImpar(n));

    float x1, x2, y1, y2;
    printf("Digite quatro pontos no gráfico: ");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    printf("A distância é %.2f\n", distanciaDoisPontos(x2, x1, y2, y1));

    system("pause");
}