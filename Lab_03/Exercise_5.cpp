#include <stdio.h>
#include <string.h>

struct Antutu
{
    char brand[50];
    char score[20];
    char win[20];
};

void text (struct Antutu *an);

int main()
{
    struct Antutu a;
    text(&a);
    printf("%s\n",a.brand);
    printf("Score : %s\n",a.score);
    printf("The Winner is : %s",a.win);
}

void text (struct Antutu *an)
{
    printf("Comparison : ");
    gets(an->brand);
    printf("Score : ");
    gets(an->score);
    printf("Which the winner? : ");
    gets(an->win);
    printf("----------\n");
}
