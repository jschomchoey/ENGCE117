#include <stdio.h>
#include <string.h>

void GetName(char *name)
{
    printf("Enter your name: ");
    gets(name);
}

int main()
{
    char str[20];
    GetName(str);
    printf("%s", str);
}