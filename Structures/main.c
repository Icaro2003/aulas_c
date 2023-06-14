#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct student_record
{
    char name[50];
    int registration;
    float grade;
};

struct date_t
{
    int day, mount, year;
};

struct client
{
    char name[50];
    int num_account, num_agency;
    struct date_t born_date;
};

struct image
{
    int width, height;
    char name[20];
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // struct student_record student;

    // printf("\n--------------Cadastro-------------------\n");

    // printf("Nome do aluno: ");
    // fgets(student.name, 50, stdin);

    // printf("Matr�cula do aluno: ");
    // scanf("%d", &student.registration);

    // printf("Nota do aluno: ");
    // scanf("%f", &student.grade);

    // printf("\n--------------Novo cadastro--------------\n");
    // printf("Nome: %s", student.name);
    // printf("Matr�cula: %d\n", student.registration);
    // printf("Nome: %.2f\n", student.grade);

    // struct client new_client;

    // printf("\n--------------Cadastro-------------------\n");

    // printf("Nome do cliente: ");
    // fgets(new_client.name, 50, stdin);

    // printf("Data de nascimento:\n");

    // printf("-> Dia: ");
    // scanf("%d", &new_client.born_date.day);

    // printf("-> M�s:");
    // scanf("%d", &new_client.born_date.mount);

    // printf("-> Ano: ");
    // scanf("%d", &new_client.born_date.year);

    // printf("N�mero da ag�ncia: ");
    // scanf("%d", &new_client.num_agency);

    // printf("N�mero da conta: ");
    // scanf("%d", &new_client.num_account);

    // printf("\n--------------Novo cadastro--------------\n");

    // printf("Cliente cadastrado: %s", new_client.name);
    // printf("Data de nascimento: %d / %d / %d\n", new_client.born_date.day, new_client.born_date.mount, new_client.born_date.year);
    // printf("N�mero da ag�ncia: %d\n", new_client.num_agency);
    // printf("N�mero da conta: %d\n", new_client.num_account);

    struct image new_image;

    printf("\n--------------Cadastro-------------------\n");

    printf("Informe o nome da imagem: ");
    fgets(new_image.name, 20, stdin);

    printf("Informe as dimens�es da imagem([largura]x[altura]): ");
    scanf("%d %d", &new_image.width, &new_image.height);

    printf("\n--------------Novo cadastro--------------\n");

    printf("Nome da imagem: %s", new_image.name);
    printf("Dimens�es da imagem: %d x %d\n", new_image.width, new_image.height);
    
    system("pause");
    return 0;
}