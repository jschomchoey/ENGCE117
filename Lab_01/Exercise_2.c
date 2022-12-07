#include <stdio.h>

int main()
{
    int g[4][4] = {
        {10, 20, 30, 40},
        {11, 21, 31, 41},
        {12, 22, 32, 42},
        {13, 23, 33, 43}};

    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
            printf("%d ", g[a][b]);
        printf("\n");
    } // End for
    printf("\n");

    int(*j)[4] = g;
    j[1][3] = 99;

    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
            printf("%d ", g[a][b]);
        printf("\n");
    } // End for
} // End main