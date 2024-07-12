/*
Hamza
23
topic: Doublly Linked List
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *previous_node;
    Node *Next_node;

    Node(int data) : data(data), previous_node(NULL), Next_node(NULL) {}
};

void insert_into_head(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    temp->Next_node = head;
    head->previous_node = temp;
    head = temp;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->Next_node;
    }
    cout << endl;
}
void deleteLinkedList(Node *&head)
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *next = current->Next_node;
        delete current;
        current = next;
    }
    head = nullptr;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;

    insert_into_head(head, 110);
    insert_into_head(head, 920);
    insert_into_head(head, 40);
    print(head);

    // free the memory
    deleteLinkedList(head);

    return 0;
}
