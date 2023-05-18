#include <stdio.h>

int main()
{
    int m[2][2];

    m[0][0] = 1;
    m[0][1] = 2;
    m[1][0] = 3;
    m[1][1] = 4;

    int m2[3][2] = {{2, 3}, {5, 7}, {8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", m2[i][j] * 2);
        }
    }
     

    return 0;
}