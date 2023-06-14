#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char nome[50];
    int matricula, notas[3];
    float media;
} Aluno;

void cadastro(Aluno *);
void imprime(Aluno);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Aluno a;
    Aluno *a_ptr = &a;

    cadastro(a_ptr);
    imprime(a);

    system("pause");
    return 0;
}

void cadastro(Aluno *a_ptr)
{
    float sum = 0, count = 0;

    printf("Informe o nome: ");
    fgets(a_ptr->nome, 50, stdin);

    printf("Informe a matrícula: ");
    scanf("%d", &a_ptr->matricula);

    printf("Informe as notas: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a_ptr->notas[i]);

        while (a_ptr->notas[i] < 0)
        {
            printf("Informe as notas novamente: ");
            scanf("%d", &a_ptr->notas[i]);
        }

        sum += a_ptr->notas[i];
        count++;
    }

    a_ptr->media = sum / count;
}

void imprime(Aluno a)
{
    printf("\n");
    printf("Nome: %s", a.nome);
    printf("Matrícula: %d\n", a.matricula);
    printf("Média: %.2f\n", a.media);
}