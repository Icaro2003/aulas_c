#include <stdio.h>

int main()
{
    int i;
    for (i = 8; i < 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\t", i);
        }
    }
}