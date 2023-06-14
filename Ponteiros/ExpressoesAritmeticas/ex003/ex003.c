#include <stdio.h>
#include <stdlib.h>

void printVectorPtr(int vPtr[], int size);

int main()
{
    int v[] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    printVectorPtr(v, 10);
    
    printf("\n");

    system("pause");
    return 0;
}

void printVectorPtr(int vPtr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *(vPtr + i));
    }
}