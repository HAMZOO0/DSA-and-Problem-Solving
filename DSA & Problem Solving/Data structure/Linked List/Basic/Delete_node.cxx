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

void delete_node(Node *&head, int postion)
{

    if (head == NULL || postion < 1)
    {
        cout << "Invalid position or empty list." << endl;
        return;
    }

    if (postion == 1) // where we delete head and point it to next node
    {
        Node *temp = head;
        head = head->Next_node;
        delete temp;
        return;
    }

    // Traverse to the node just before the specified position
    Node *current_node = head;
    for (int i = 1; i < postion - 1; i++)
    {

        current_node = current_node->Next_node;
    }

    // if postion is outof range
    if (current_node->Next_node == NULL || current_node == NULL)
    {
        cout << "postion is out of range";
        return;
    }

    // here we create temp and add the address of node which we want to delete
    Node *temp = current_node->Next_node;

    // adding the address of  next node after of delete node
    current_node->Next_node = temp->Next_node;

    delete temp;
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

    delete_node(head, 4);
    print(head);
    return 0;
}
