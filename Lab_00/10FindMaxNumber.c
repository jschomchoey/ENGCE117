#include <stdio.h>

int main()
{
    int Max = 0, Data = 0, Count;
    for (Count = 0; Count < 10; Count++)
    {
        printf("Enter Value: ");
        scanf("%d", &Data);
        if (Data >= Max) Max = Data;
    }
    printf("Max Number: %d", Max);
}