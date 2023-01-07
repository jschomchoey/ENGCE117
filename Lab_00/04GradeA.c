#include <stdio.h>

int main()
{
    int Study;
    printf("Take the class\n");
    printf("Diligent at studying\n");
    printf("Take Notes\n");
    printf("Submit assignments on time\n");
    do
    {
        printf("Review study\n");
        printf("Understand?\n");
        printf("    Press 1 : Understand\n");
        printf("    Press 2 : Not understand\n");
        scanf("%d", &Study);
    } while (Study == 2);
    printf("Take a test\n");
    printf("Get the point\n");
    printf("Collect A Grade\n");
}