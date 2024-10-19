/*
Video No : 199
 */
#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    int data;
    Node *Next_node;
    Node(int val) : data(val), Next_node(NULL) {}
};

void _tail(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    Node *tail = head;
    while (tail->Next_node)
    {
        tail = tail->Next_node;
    }

    tail->Next_node = temp;
}

void reverse(Node *&head)
{

    Node *p = head;
    Node *q = NULL;
    Node *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->Next_node;
        q->Next_node = r;
    }
    head = q; // Update head to the new head of the reversed list
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
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    _tail(head, 1);
    _tail(head, 2);
    _tail(head, 3);
    _tail(head, 4);

    reverse(head);
    print(head);

    return 0;
}
