#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
// ex: x -> -10 e 10
	int x = 5;
	if ((x > -10) && (x < 10))
	{
		printf("%d est� no intervalo entre -10 e 10\n", x);
	}

//	if ((x > -10) || (x < 10))
//	{
//		printf("%d est� no intervalo entre -10 e 10\n", x);
//	}

	// ex: Servi�o militar obrigat�rio?
//	int masc, idade;
//	printf("Sexo masculino? 1 - Sim ou 2 - N�o\n");
//	scanf("%d", &masc);
//
//	printf("Informe sua idade:\n");
//	scanf("%d", &idade);
//
//	if (masc == 1 && idade >= 18)
//	{
//		printf("Servi�o militar obrigat�rio\n");
//	}

	// ex: n >= 100
//	int n;
//	printf("Digite um valor inteiro: ");
//	scanf("%d", &n);
//
//	if (n >= 100)
//	{
//		printf("%d � maior ou igual a 100(belo valor man)\n", n);
//	}

	// ex: num > 10 e num < 100
//	int num;
//	printf("Digite um valor inteiro: ");
//	scanf("%d", &num);
//
//	if (num > 10 && num < 100)
//	{
//		printf("%d est� entre 10 e 100\n", num);
//	}

	// ex: (if simplificado - variavel = (condicao) ? V : F)
//	int n, r;
//	printf("Digite um valor inteiro: ");
//	scanf("%d", &n);
//
//	r = n > 100 ? 0 : 1;
//	printf("%d\n", r);

	system("pause");
	return 0;
}
