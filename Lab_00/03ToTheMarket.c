#include <stdio.h>

int main()
{
    int Money, Buy;
    printf("Prepare buying list\n");
    printf("Check the money\n");
    printf("The money enough?\n");
    printf("    Press 1 : The money enough\n");
    printf("    Press 2 : The money not enough\n");
    scanf("%d", &Money);
    if (Money == 1)
        printf("Bike to Market\n");
    else if (Money == 2)
    {
        printf("Bike to withdraw cash\n");
        printf("Bike to Market\n");
    }
    do
    {
        printf("Buy items according to the list\n");
        printf("Check the list\n");
        printf("    Press 1 : Bought everything.\n");
        printf("    Press 2 : Still not bought everything\n");
        scanf("%d", &Buy);
    } while (Buy == 2);
    printf("Take home\n");
}