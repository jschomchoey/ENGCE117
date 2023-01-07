#include <stdio.h>

main()
{
    int i, j, n;
    printf("Input Max Range : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
            printf("%d\n", i);
    }
}