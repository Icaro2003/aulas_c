#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fillEvenNumber(int *[], int);

int main()
{
    int size;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &size);

    int v[size];

    printf("%d", fillEvenNumber(&v[size], size));    
}

int fillEvenNumber(int *v[], int s)
{
    

    for (int i = 0; i < s; i++)
    {
        if (i % 2 == 0)
        {
            *(v + i) = i;
        }
    }
}