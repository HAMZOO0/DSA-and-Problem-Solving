
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *Next_node;

    Node(int val) : data(val), Next_node(nullptr) {}
};

void insert_in_tail(Node *&head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        // temp->Next_node = head;
        head = temp;
        return;
    }

    Node *tail = head;
    while (tail->Next_node != NULL)
    {
        tail = tail->Next_node;
    }

    tail->Next_node = temp;
}

// for mid insertion
void insert_in_mid(Node *&head, int data, int postion)
{
    if (postion == 1)
    {
        // call head_insert_function
    }

    Node *NEW_NODE_TO_INSert = new Node(data);
    Node *temp = head;
    int count = 1;

    while (count < postion - 1)
    {
        temp = temp->Next_node;
        ++count;
    }

    NEW_NODE_TO_INSert->Next_node = temp->Next_node;

    temp->Next_node = NEW_NODE_TO_INSert;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " " << head->Next_node << endl;
        head = head->Next_node;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = nullptr; // Initialize an empty list

    // Insert elements at the head
    insert_in_tail(head, 2);
    insert_in_tail(head, 22);
    insert_in_tail(head, 202);

    insert_in_mid(head, 1000, 2);

    print(head);
    return 0;
}
