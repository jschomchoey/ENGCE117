#include <stdio.h>

int main()
{
    int n, i, j, count;
    int arr[100];
    printf("Input number of element to be store in array : ");
    scanf("%d", &n);
    printf("----\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d] : ", i + 1);
        scanf("%d", &arr[i]);
    } // Input value

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j] && arr[i] != 0)
            {
                count++;
                arr[j] = 0;
            }
        } // Check the same value in array
        if (arr[i] != 0)
        {
            printf("%d -> %d\n", arr[i], count);
        } // Print value
    }
} // End