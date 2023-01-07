#include <stdio.h>

int main()
{
    int MAMA, Water;
    printf("Tear the MAMA envelope into the bowl\n");
    printf("Add Seasoning\n");
    printf("Boil Water\n");
    printf("Wait for Boiling Water\n");
    do
    {
        printf("Is the water boiling?\n");
        printf("    Press 1 : The water boiling\n");
        printf("    Press 2 : The water not boiling\n");
        scanf("%d", &Water);
    } while (Water == 2);
    printf("Pour hot water into a MAMA bowl\n");
    do
    {
        printf("Cover the bowl\n");
        printf("Is the MAMA cooked?\n");
        printf("    Press 1 : The MAMA cooked\n");
        printf("    Press 2 : The MAMA not cooked\n");
        scanf("%d", &MAMA);
    } while (MAMA == 2);
    printf("Let's EAT!!!\n");
}