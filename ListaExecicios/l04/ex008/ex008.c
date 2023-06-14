#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void checkBissextYear(int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int year;
    printf("Informe o ano: ");
    scanf("%d", &year);

    checkBissextYear(year);
    system("pause");
    return 0;
}

void checkBissextYear(int y)
{
    char is_bissext;

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        is_bissext = 'S';
    }
    else
    {
        is_bissext = 'N';
    }

    printf("%d é bissexto? %c\n", y, is_bissext);
}