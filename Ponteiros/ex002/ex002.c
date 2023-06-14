#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *xPtr = &x;

    printf("%d\n", x);
    printf("%d\n", *xPtr);
    printf("%p\n", xPtr);
    printf("%p\n", &x);

    system("pause");
    return 0;
}