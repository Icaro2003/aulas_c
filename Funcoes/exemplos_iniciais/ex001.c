#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numerador_potencia = pow(5, 3);
    float denominador_raiz = sqrt(46);
    float divisao01 = (pow(5, 3) + 8) / sqrt(46);
    printf("%.2f\n", divisao01);

    float numerador_seno = sin(48);
    float denominador_raiz_potencia = pow(sqrt(23), 4);
    float divisao02 = numerador_seno / (-5 * denominador_raiz_potencia);
    printf("%f\n", divisao02);

    float logaritmo = log10(pow(4, 7));
    printf("%.2f\n", logaritmo);

    system("pause");
    return 0;
}