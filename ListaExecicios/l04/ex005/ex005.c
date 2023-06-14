#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sumEstructure(float n1, float n2, float n3, float n4);

int main()
{
    printf("S = %f\n", sumEstructure(5, 7, -1, 9));
    
    system("pause");
    return 0;
}

float sumEstructure(float n1, float n2, float n3, float n4)
{
    float sum = 0;

    while (n1 <= 23 && n2 <= 25 && n3 <= 10 && n4 <= 90)
    {
        sum += sin(n1 * 3.14 / n2) + pow(5, n3) - sqrt(n4);

        n1 += 2;
        n2 += 2;
        n3--;
        n4 += 9;
    }

    return sum;
}