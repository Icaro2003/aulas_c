#include <stdio.h>

int main()
{
    int mult = 7;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", mult, i, mult * i);
    }

    return 0;
}