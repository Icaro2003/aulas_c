#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ARRSIZE 3

int floatSumInt(float[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // float number1, number2, number3;

    // printf("Informe três valores reais: ");
    // scanf("%f %f %f", &number1, &number2, &number3);

    float numbers[ARRSIZE];

    printf("Informe três valores reais: ");

    for (int i = 0; i < ARRSIZE; i++)
    {
        scanf("%f", &numbers[i]);
    }

    printf("Soma: %d\n", floatSumInt(numbers));

    system("pause");
    return 0;
}

// int floatSumInt(float n1, float n2, float n3)
// {
//     int sum = (n1 * n1) + (n2 + n3);

//     return sum;
// }

int floatSumInt(float n[ARRSIZE])
{
    int sum = (n[0] * n[0]) + (n[1] + n[2]);

    return sum;
}