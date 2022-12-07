#include <stdio.h>

int add(int x, int y)
{
    return x * y;
} // end add

int operation(int x, int y, int (*function)(int, int))
{
    return (*function)(x, y);
} // end operation

int main()
{
    printf("==> %d\n", operation(6, 5, add));
    return 0;
} // end main
