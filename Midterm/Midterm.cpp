// นายธีระภัทร ชมเชย 65543206019-3 Section 2
// https://youtu.be/bpDmatqtofk

#include <stdio.h>
#include <string.h>

struct appleNode
{
    char Product[30];
    int Price;
    struct appleNode *next;
};

void ShowAll(struct appleNode *walk);
struct appleNode *AddNode(struct appleNode **walk, char pro[], int pri);
void UpdateNode(struct appleNode *walk, char proO[], char proN[], int pri);
void SwapNode(struct appleNode **walk, char proO[], char proN[]);
void ShowBack(struct appleNode **walk);

int main()
{
    struct appleNode *start;
    start = NULL;

    printf("\t\t\tAdd Node\n");
    AddNode(&start, "iPhone", 41900);
    AddNode(&start, "iPad", 32900);
    AddNode(&start, "MacBook", 73900);
    AddNode(&start, "MacStudio", 69900);
    ShowAll(start);

    printf("\t\t\tUpdate Node\n");
    UpdateNode(start, "MacBook", "iMac", 45900);
    ShowAll(start);
    UpdateNode(start, "MacStudio", "MacMini", 20900);
    ShowAll(start);

    printf("\t\t\tSwap Node\n");
    SwapNode(&start, "iPad", "MacMini");
    ShowAll(start);
    SwapNode(&start, "iMac", "iPhone");
    ShowAll(start);

    printf("\t\t\tShow Back\n");
    ShowBack(&start);
    return 0;
}

void ShowAll(struct appleNode *walk)
{
    while (walk != NULL)
    {
        printf("[%s ", walk->Product);
        printf("%d] ", walk->Price);
        walk = walk->next;
    }
    printf("\n");
}

struct appleNode *AddNode(struct appleNode **walk, char pro[], int pri)
{
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    }
    *walk = new struct appleNode;
    strcpy((*walk)->Product, pro);
    (*walk)->Price = pri;
    (*walk)->next = NULL;
    return *walk;
}

void UpdateNode(struct appleNode *walk, char proO[], char proN[], int pri)
{
    while (strcmp(walk->Product, proO) != 0)
    {
        walk = walk->next;
    }
    strcpy(walk->Product, proN);
    walk->Price = pri;
}

void SwapNode(struct appleNode **walk, char proO[], char proN[])
{
    struct appleNode *prevProO = NULL, *currProO = *walk;
    while (strcmp(currProO->Product, proO) != 0)
    {
        prevProO = currProO;
        currProO = currProO->next;
    }
    struct appleNode *prevProN = NULL, *currProN = *walk;
    while (strcmp(currProN->Product, proN) != 0)
    {
        prevProN = currProN;
        currProN = currProN->next;
    }

    if (prevProO != NULL)
        prevProO->next = currProN;
    else
        *walk = currProN;

    if (prevProN != NULL)
        prevProN->next = currProO;
    else
        *walk = currProO;

    struct appleNode *temp = currProN->next;
    currProN->next = currProO->next;
    currProO->next = temp;
}

void ShowBack(struct appleNode **walk)
{
    struct appleNode *prevNode = NULL;
    struct appleNode *currNode = *walk;
    struct appleNode *nextNode = NULL;
    while (currNode != NULL)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    *walk = prevNode;
    while ((*walk) != NULL)
    {
        printf("[%s ", (*walk)->Product);
        printf("%d] ", (*walk)->Price);
        (*walk) = (*walk)->next;
    }
}