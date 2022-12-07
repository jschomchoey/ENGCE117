#include <stdio.h>

int main()
{
    int i, j, row, col;
    printf("How many rows : ");
    scanf("%d", &row);
    printf("How many column : ");
    scanf("%d", &col);

    int *a;
    a = new int[row * col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i * col + j]);
        } // end for
    }     // end for
    return 0;
}