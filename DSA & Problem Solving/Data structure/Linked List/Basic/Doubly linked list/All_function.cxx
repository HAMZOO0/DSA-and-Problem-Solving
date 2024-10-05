
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
};

//  insert at head of the list

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

//  insert at tail/End  of the list

void insertAtEnd(DoubleCircularList *&head, int data)
{

    // if head is null
    if (head == nullptr)
    {
        insertAtStart(head, data);
    }

    // create  a new node
    DoubleCircularList *temp = new DoubleCircularList(data);
    // here we create  a tail node
    DoubleCircularList *tail = head;
    // traverse till the last node
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    // linke the tail with new node and new node prev point with last (tail ) node
    tail->next = temp;
    temp->prev = tail;
}

// ! note : here i am using *head pointer bcz we are not changing its data
void insertAtPos(DoubleCircularList *&head, int data, int pos)
{
    // if head is null
    if (head == nullptr || pos == 1 || pos == 0)
    {
        insertAtStart(head, data);
        return;
    }
    if (pos > 0)
    {
        cout << "invalid position \n";
    }

    DoubleCircularList *working_Node = head;

    for (int i = 1; i < pos - 1; i++)
    {
        working_Node = working_Node->next;
    }

    // invalid pos ...
    if (working_Node == NULL)
    {
        cout << "invalid position \n";

        return;
    }

    // if user want to add node at the end then we use inserAtEnd node
    if (working_Node->next == nullptr)
    {
        insertAtEnd(head, data);

        return;
    }

    // linking
    DoubleCircularList *temp = new DoubleCircularList(data);

    // Linking the new node
    temp->next = working_Node->next; // Link temp to the next node
    temp->prev = working_Node;       // Link temp back to the current node
    working_Node->next->prev = temp; // Update the previous node of the next node
    working_Node->next = temp;       // Link the current node to temp
}
// Delete node at a specific position
void delete_node(DoubleCircularList *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "Invalid position, list is empty\n";
        return;
    }

    // If user wants to delete the first node
    if (pos == 1)
    {
        DoubleCircularList *temp = head;
        head = temp->next;

        if (head != nullptr)
            head->prev = nullptr;

        delete temp;
        return;
    }
 
    DoubleCircularList *delete_node = head;

    for (int i = 1; i < pos; i++)
    {
        delete_node = delete_node->next;

        if (delete_node == nullptr) // Position out of bounds
        {
            cout << "Invalid position\n";
            return;
        }
    }

    // If deleting the last node
    if (delete_node->next == nullptr)
    {
        delete_node->prev->next = nullptr;
    }
    else
    {
        delete_node->prev->next = delete_node->next;
        delete_node->next->prev = delete_node->prev;
    }

    delete delete_node;
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

// delete whole list
void delete_all(DoubleCircularList *&head)
{

    while (head != nullptr)
    {
        DoubleCircularList *temp = head;
        head = head->next;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
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

    // insertAtEnd(head, 1000);

    // insertAtPos(head, 69, 0);
    delete_node(head, 3);

    print(head);

    delete_all(head);
    return 0;
}
