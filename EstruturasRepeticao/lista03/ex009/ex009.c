#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, irff;

    for (int i = 1; i <= 10; i++)
    {
        printf("Informe seu salário: ");
        scanf("%f", &salario);

        if (salario < 1300)
        {
            printf("IRRF insento\n\n");
        }
        else if (salario >= 1300 && salario < 2300)
        {
            irff = salario - (salario * 0.1);
            printf("IRFF de 10%% no salário de %.2f fica: %.2f\n\n", salario, irff);
        }
        else if (salario >= 2300)
        {
            irff = salario - (salario * 0.15);
            printf("IRFF de 15%% no salário de %.2f fica: %.2f\n\n", salario, irff);
        }
    }

    system("pause");
    return 0;
}