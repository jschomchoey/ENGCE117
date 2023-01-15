#include <stdio.h>

struct Personal
{
    int age;
    int height;
    int weight;
};

void set(struct Personal *state); // Prototype

int main()
{
    struct Personal d;
    set(&d);
    printf("James Age : %d Years Old\n", d.age);
    printf("James Height : %d Centimeter\n", d.height);
    printf("James Weight : %d Kilogram\n", d.weight);
    return 0;
}

void set(struct Personal *state)
{
    (*state).age = 21;
    (*state).height = 174;
    (*state).weight = 74;
}