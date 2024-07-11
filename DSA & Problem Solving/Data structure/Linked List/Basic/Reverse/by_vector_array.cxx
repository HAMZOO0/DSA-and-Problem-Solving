
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
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->Next_node;
    }
    cout << endl;
}

void reverse(Node *&head)
{
    Node *temp = head;

    vector<int> stor;
    while (temp != NULL)
    {
        stor.push_back(temp->data);
        temp = temp->Next_node;
    }

    temp = head; // again reset the postion

    for (int i = stor.size() - 1; temp != NULL; i--)
    {
        temp->data = stor.at(i);
        temp = temp->Next_node;
    }
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
