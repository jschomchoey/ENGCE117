int main()
{
    int Restaurant;
    printf("Select the type of food want to sell\n");
    printf("Find raw materials\n");
    do
    {
        printf("find a store location\n");
        printf("    Press 1 : Good Lacation\n");
        printf("    Press 2 : Bad Lacation\n");
        scanf("%d", &Restaurant);
    } while (Restaurant == 2);
    printf("open a restaurant business\n");
}