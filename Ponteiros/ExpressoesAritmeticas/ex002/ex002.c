#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[3] = {1, 2, 3};
    printf("%d\n", *(v + 1));
    printf("%d\n", *(v + 0));
    printf("%d\n", *(v + 2));

    system("pause");
    return 0;
}