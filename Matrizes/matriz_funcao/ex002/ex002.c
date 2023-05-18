#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4

int main()
{
    int m[ROW][COL];
    int i, j, sum;
    
    for (i = 0; i < ROW; i++)
    {
        printf("\n");
        for (j = 0; j < COL; j++)
        {
            m[ROW][COL] = i + j;
            printf("%d\t", m[ROW][COL]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}