#include <stdio.h>

int multiply(int num[5]);

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    int mult = multiply(num);

    printf("Produto: %d\n", mult);
}

int multiply(int num[5])
{
    int mult = 1;

    for (int i = 0; i < 5; i++)
    {
        mult *= num[i];
    }

    return mult;
}