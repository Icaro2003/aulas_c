#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct points
{
    float x, y;
};

void printPoints(struct points *);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct points pt;
    struct points *pt_ptr = &pt;

    printPoints(pt_ptr);

    system("pause");
    return 0;
}

void printPoints(struct points *p_ptr)
{
    printf("As coodernadas são x e y: ");
    scanf("%f %f", &p_ptr -> x, &p_ptr -> y);

    printf("As coodernadas são x: %.2f e y: %.2f\n", p_ptr -> x, p_ptr -> y);
}