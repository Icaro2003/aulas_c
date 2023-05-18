#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 2

int zeroCount(int m[ROW][COL]); 

int main()
{
    int matrix[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("Informe o elemento da matriz: ");
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("A quantidade de zeros: %d\n", zeroCount(matrix));

    system("pause");
    return 0;
}

int zeroCount(int m[ROW][COL])
{
    int count = 0;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (m[i][j] == 0)
            {
                count++;
            }
        }
    }

    return count;
}