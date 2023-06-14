#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float groundArea(float base, float height);
float groundPerimiter(float s[4]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sides[4];

    printf("Digite as dimensões do terreno(cm): ");

    for (int i = 0; i < 4; i++)
    {
        scanf("%f", &sides[i]);
    }

    printf("Área do terreno %.2f x %.2f: %.2f\n", sides[0], sides[1], groundArea(sides[0], sides[1]));
    printf("Perímetro do terreno: %.2f\n", groundPerimiter(sides));

    system("pause");
    return 0;
}

float groundArea(float base, float height)
{
    return base * height;
}

float groundPerimiter(float s[4])
{
    float sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += s[i];
    }

    return sum;
}