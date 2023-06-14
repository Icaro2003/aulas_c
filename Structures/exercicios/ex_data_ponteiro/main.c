#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct date_format
{
    int day, mounth, year;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct date_format dt;
    struct date_format *dt_ptr = &dt;

    printf("Informe o dia: ");
    scanf("%d", &dt_ptr -> day);
    
    printf("Informe o mês: ");
    scanf("%d", &dt_ptr -> mounth);
    
    printf("Informe o dia: ");
    scanf("%d", &dt_ptr -> year);

    printf("%d / %d / %d\n", dt_ptr -> day, dt_ptr -> mounth, dt_ptr -> year);

    system("pause");
    return 0;
}