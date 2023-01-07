int main()
{
    int Book;
    printf("Select the topic that want to read.\n");
    do
    {
        printf("Select some book\n");
        printf("Read the review about that book\n");
        printf("Match with required?\n");
        printf("    Press 1 : Match\n");
        printf("    Press 2 : Doesn't match\n");
        scanf("%d", &Book);
    } while (Book == 2);
    printf("Buy it!!!\n");
}