#include <stdio.h>

void GetName(char **name);

int main()
{
    char *str;
    GetName(&str);
    printf("%s", str);
    return 0;
}

void GetName(char **text)
{
    *text = new char[20];
    printf("Enter your name: ");
    gets(*text);
}