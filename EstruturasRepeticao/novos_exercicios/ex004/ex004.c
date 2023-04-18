#include <stdio.h>

int main()
{
    float n1, n2, r = 0;

    for (n1 = 1, n2 = 4; (n1 <= 20 && n2 <= 23); n1++, n2++)
    {
        r += n1 / n2;
    }

    printf("R = %f\n", r);

    return 0;
}