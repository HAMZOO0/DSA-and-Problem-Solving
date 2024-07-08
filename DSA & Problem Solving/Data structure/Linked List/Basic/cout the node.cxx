/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next_Node = NULL;

    Node(int data) : data(data) {}
};

void insert_in_tail(Node *&head, int data)
{

    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *tail = head;

    while (tail->Next_Node)
    {
        tail = tail->Next_Node;
    }

    tail->Next_Node = temp;
}

int counter(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    else
    {
        return counter(head->Next_Node) + 1;
    }
}

// printing
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->Next_Node;
    }
    cout << endl;
}

main(int argc, char const *argv[])
{
    Node *head = nullptr; // Initialize an empty list

    // Insert elements at the head
    insert_in_tail(head, 22);
    insert_in_tail(head, 40);
    insert_in_tail(head, 80);
    insert_in_tail(head, 120);

    cout << counter(head);
    return 0;
}
