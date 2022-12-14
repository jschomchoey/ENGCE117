#include <stdio.h>
#include <string.h>

char *GetName();

int main()
{
    char str[20];
    strcpy(str, GetName());
    printf("%s", str);
    return 0;
}

char *GetName()
{
    char *name = new char[20];
    printf("Enter your name: ");
    gets(name);
    return name;
}