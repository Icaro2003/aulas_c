#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float nota;
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	printf("A nota do aluno foi %.2f \n", nota);

	float altura;
	float peso;
	printf("Digite sua altura(cm): ");
	scanf("%f", &altura);
	printf("Digite seu peso(kg): ");
	scanf("%f", &peso);
	printf("Sua altura é %.2f m e seu peso é %.2f kg\n", altura / 100, peso);

	int x;
	printf("Digite um valor inteiro: ");
	scanf("%d", &x);
	printf("A metade de %d é %d\n", x, x / 2);

	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Você tem %d anos de idade\n", idade);

	system("pause");
	return 0;
}
