#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 2;
    int *numPtr = &num;

    printf("%p\n", numPtr);

    numPtr--;

    printf("%p\n", numPtr);

    system("pause");
    return 0;
}