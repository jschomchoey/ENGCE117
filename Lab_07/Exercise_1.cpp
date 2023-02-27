#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};

class LinkedList
{
protected:
    struct studentNode *start, **now;

public:
    LinkedList();  // กำหนดค่าเริ่มต้นของ start และ now
    ~LinkedList(); // คืนหน่วยความจำที่จองไว้ในลิงค์ลิสต์ทุกโหนด
    void InsNode(char n[], int a, char s, float g);
    void DelNode();
    void GoNext(); // เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดถัดไป
    virtual void ShowNode();
}; // end class

class NewList : public LinkedList
{
public:
    void GoFirst();          // เปลี่ยนโหนดปัจจุบันไปชี้ที่โหนดเริ่มต้น
    virtual void ShowNode(); // แสดงข้อมูลในทุกโหนดตั้งแต่เริ่มต้นถึงสุดท้าย
};                           // end class

int main()
{
    LinkedList listA;
    NewList listB;
    LinkedList *listC = new NewList();

    listA.InsNode("one", 1, 'A', 1.1);
    listA.InsNode("two", 2, 'B', 2.2);
    listA.InsNode("three", 3, 'C', 3.3);
    listA.GoNext();
    listA.ShowNode();

    listB.InsNode("four", 4, 'D', 4.4);
    listB.InsNode("five", 5, 'E', 5.5);
    listB.InsNode("six", 6, 'F', 6.6);
    listB.GoNext();
    listB.DelNode();
    listB.ShowNode();

    listC = &listA;
    listC->GoNext();
    listC->ShowNode();

    listC = &listB;
    listC->ShowNode();

    return 0;
};

void LinkedList ::InsNode(char n[], int a, char s, float g)
{
    struct studentNode *temp = new studentNode;
    strcpy(temp->name, n);
    temp->age = a;
    temp->sex = s;
    temp->gpa = g;

    temp->next = start;
    temp->back = NULL;

    if (start != NULL)
    {
        start->back = temp;
    }
    start = temp;
    now = &start;
} // end function

void LinkedList ::GoNext()
{
    now = &(*now)->next;
} // end function

void LinkedList ::ShowNode()
{
    printf("%s %d %c %0.2f\n", (*now)->name, (*now)->age, (*now)->sex, (*now)->gpa);
} // end function

void NewList ::ShowNode()
{
    struct studentNode *temp;
    if (start != NULL)
    {
        temp = start;
    }
    else
    {
        start = temp;
    }

    while (start != NULL)
    {
        printf("%s ", start->name);
        start = start->next;
    } // end loop
    printf("\n");

} // end function

void NewList ::GoFirst()
{
    now = &(start);
}

LinkedList ::LinkedList()
{
    start = NULL;
}

LinkedList ::~LinkedList()
{
    delete start;
    delete now;
}

void LinkedList ::DelNode()
{
    if (*now == NULL)
    {
        return;
    }

    struct studentNode *temp = *now;
    if ((*now)->back != NULL)
    {
        (*now)->back->next = (*now)->next;
    }

    if ((*now)->next != NULL)
    {
        (*now)->next->back = (*now)->back;
        *now = (*now)->next;
    }
    delete temp;

} // end function