#include <stdio.h>

int main()
{
    int i, n, sum = 0, total = 9;
    printf("User Input : ");
    scanf("%d", &n);
    printf("----\n");
    printf("Series = ");
    for (i = 1; i <= n; i++)
    {
        sum = sum + total;
        printf("%d", total);
        if (i <= n - 1)
        {
            printf(" + ");
        } // Control print of "+"
        total = total * 10 + 9;
    } // Print pattern
    printf("\n");
    printf("Sum = ");
    printf("%d  ", sum);
} // End