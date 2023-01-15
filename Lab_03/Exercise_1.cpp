#include <stdio.h>

struct Personal
{
    int age;
    int height;
    int weight;
};

int main()
{
    struct Personal body;
    body.age = 21;
    body.height = 174;
    body.weight = 74;
    printf("James age : %d Years Old\n", body.age);
    printf("James Height : %d Centimeter\n", body.height);
    printf("James Weight : %d Kilogram\n", body.weight);
    return 0;
}