#include <stdio.h>

int main()
{
    int n = 9;

    while (n <= 47)
    {
        if (n % 2 != 0)
        {
            printf("%d\n", n);
        }

        n++;
    }

    return 0;
}