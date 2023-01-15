#include <stdio.h>
#include <string.h>

struct Car
{
    char model[20];
    int year;
    int price;
}; // end loop

void addNum(struct Car c);

int main()
{
    struct Car c1, *c;
    strcpy(c1.model, "Ford Ranger Raptor");
    c1.year = 2023;
    c1.price = 86790;
    c = &c1;
    addNum(c1);
    return 0;
}

void addNum(struct Car c)
{
    printf("Model : %s\n", c.model);
    printf("Year : %d\n", c.year);
    printf("Price : %d $\n", c.price);
}