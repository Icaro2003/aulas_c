#include <stdio.h>

int main()
{
    char sex;
    int age;
    float weight, height;

    // printf("Informe sua idade, peso, altura e sexo f ou m: ");
    // scanf("%d %f %f %c", &age, &weight, &height, &sex);

    printf("Digite sua idade: ");
    scanf("%d", &age);
    printf("Digite seu peso: ");
    scanf("%f", &weight);
    printf("Digite sua altura: ");
    scanf("%f", &height);
    
    scanf("%c");

    printf("Digite seu sexo f ou m: ");
    scanf("%c", &sex);

    printf("Idade: %d\nPeso: %.2f\nAltura: %.2f\nSexo: %c", age, weight, height, sex);

    return 0;
}