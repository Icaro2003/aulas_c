#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Quest�o 1
    float alunos[200];

    // Quest�o 2
    int numeros[] = {32, 33, 34, 35, 36, 37, 38, 39};

    // Quest�o 3
    int numero_zero[4000] = {0};

    // Quest�o 4
    int numeros_digitados[3];
    printf("Digite 3 valores inteiros: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &numeros_digitados[i]);
        printf("%d\n", numeros_digitados[i]);
    }

    printf("\n");

    // Escreva um programa que cria um vetor para armazenar o sal�rio dos funcion�rios de uma empresa com 400 funcion�rios. Inicialize o sal�rio de cada funcion�rio com o valor do sal�rio m�nimo(R$ 800,00).
    float salario[400];

    for (int i = 0; i < 400; i++)
    {
        salario[i] = 800;
    }
    
    printf("Sal�rio do �ltimo menor: %d\n", salario[400]);

    system("pause");
    return 0;
}