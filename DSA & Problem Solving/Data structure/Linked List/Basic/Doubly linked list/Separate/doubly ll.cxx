
#include <iostream>
using namespace std;

class DoubleCircularList
{

public:
    int data;
    DoubleCircularList *next; // pointer to next node
    DoubleCircularList *prev; // pointer to previous node

    DoubleCircularList(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    //  insert at head of the list
};

void insertAtStart(DoubleCircularList *&head, int data)
{

    DoubleCircularList *temp = new DoubleCircularList(data);

    if (head == nullptr)
    {
        head = temp;
        temp->prev = head;
        return;
    }

    temp->next = head;
    head = temp;
    temp->prev = head;
}

void print(DoubleCircularList *head)
{

    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main(int argc, char const *argv[])
{

    int userChoice;
    DoubleCircularList *head = nullptr;

    insertAtStart(head, 1);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    insertAtStart(head, 4);
    insertAtStart(head, 5);
    print(head);

   

    return 0;
}
