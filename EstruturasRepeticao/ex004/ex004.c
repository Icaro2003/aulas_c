#include <stdio.h>

int main()
{
    int n = 95;

    while (n <= 105)
    {
        if (n == 100)
        {
            n++;
            continue;
        }

        printf("%d\n", n);
        n++;
    }

    return 0;
}