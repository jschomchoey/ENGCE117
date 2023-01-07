#include <stdio.h>

int main()
{
    int Customer;
    do
    {
        printf("Prepare product\n");
        printf("Prepare prob\n");
        printf("Take the product picture\n");
        printf("Promote the product on many social network\n");
        printf("How many customer\n");
        printf("    Input number of customer? : ");
        scanf("%d", &Customer);
    } while (Customer < 1000);
}