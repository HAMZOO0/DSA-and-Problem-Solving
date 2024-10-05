
#include <iostream>
using namespace std;

class DoubleList
{

public:
    int data;
    DoubleList *next; // pointer to next node
    DoubleList *prev; // pointer to previous node

    DoubleList(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

//  insert at head of the list

void insertAtStart(DoubleList *&head, int data)
{

    DoubleList *temp = new DoubleList(data);

    if (head == nullptr)
    {
        head = temp;
        temp->prev = head;
        return;
    }

    temp->next = head;
    head->prev = temp;
    temp->prev = nullptr;
    head = temp;
}
void insertAtEnd(DoubleList *&head, int data)
{

    // if head is null
    if (head == nullptr)
    {
        insertAtStart(head, data);
    }

    // create  a new node
    DoubleList *temp = new DoubleList(data);
    // here we create  a tail node
    DoubleList *tail = head;
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
void insertAtPos(DoubleList *&head, int data, int pos)
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

    DoubleList *working_Node = head;

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
    DoubleList *temp = new DoubleList(data);

    // Linking the new node
    temp->next = working_Node->next; // Link temp to the next node
    temp->prev = working_Node;       // Link temp back to the current node
    working_Node->next->prev = temp; // Update the previous node of the next node
    working_Node->next = temp;       // Link the current node to temp
}
// Delete node at a specific position
void delete_node(DoubleList *&head, int pos)
{
    // Check if the list is empty
    if (head == nullptr)
    {
        cout << "Invalid position: List is empty\n";
        return;
    }

    // Special case: deleting the first node
    if (pos == 1)
    {
        DoubleList *temp = head; // Store the current head
        head = head->next;       // Move head to the next node

        // If there's more than one node in the list
        if (head != nullptr)
        {
            head->prev = nullptr; // Update the new head's previous pointer
        }

        // Clear pointers of the node to be deleted
        temp->next = nullptr; // Disconnect the next pointer
        temp->prev = nullptr; // Disconnect the previous pointer
        delete temp;          // Delete the old head
        return;
    }

    // Traverse to find the node to delete
    DoubleList *current = head;
    for (int i = 1; i < pos && current != nullptr; i++)
    {
        current = current->next;
    }

    // If the position is invalid (greater than the number of nodes)
    if (current == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    // Update the links for deletion
    if (current->prev != nullptr)
    {
        current->prev->next = current->next; // Link the previous node to the next node
    }
    if (current->next != nullptr)
    {
        current->next->prev = current->prev; // Link the next node back to the previous node
    }

    // Clear pointers of the node to be deleted
    current->next = nullptr; // Disconnect the next pointer
    current->prev = nullptr; // Disconnect the previous pointer

    // Delete the node
    delete current;
}
void print(DoubleList *head)
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
    cout << endl; // Ensure a newline after printing
}

// delete whole list
void delete_all(DoubleList *&head)
{

    while (head != nullptr)
    {
        DoubleList *temp = head;
        head = head->next;
        temp->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }
}

int main(int argc, char const *argv[])
{

    int userChoice;
    DoubleList *head = nullptr;

    insertAtStart(head, 1);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    insertAtStart(head, 4);
    insertAtStart(head, 5);

    // insertAtEnd(head, 1000);

    // insertAtPos(head, 69, 0);
    delete_node(head, 2);

    print(head);

    delete_all(head);
    return 0;
}
