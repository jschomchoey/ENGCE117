#include <stdio.h>

int main()
{
    int Baht;
    do
    {
        printf("Plan the business model\n");
        printf("Invest in product preparation\n");
        printf("Plan the trade strategy\n");
        printf("Prepare Online Store\n");
        printf("Promote product\n");
        printf("Sell product\n");
        printf("Profit estimate\n");
        printf("How many profit?\n");
        printf("    Input the profit? : ");
        scanf("%d", &Baht);
    } while (Baht < 1000000);
}