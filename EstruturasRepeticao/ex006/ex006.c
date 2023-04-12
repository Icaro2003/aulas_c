#include <stdio.h>

int main()
{
    int n = 9;

    do
    {
        if (n % 2 != 0)
        {
            printf("%d\n", n);
        }
        n++;
    } while (n <= 47);
}