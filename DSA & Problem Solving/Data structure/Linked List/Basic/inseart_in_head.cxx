/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;

// class of node
class Node
{

public:
    int data;
    Node *Next_Node = nullptr;
    Node(int data)
    {
        this->data = data;
        this->Next_Node = nullptr;
    }
};

void insert_in_head(Node *&head, int data)
{

    cout << "head --> " << head << endl;

    Node *temp = new Node(data);
    temp->Next_Node = head;
    head = temp;

    cout << "Data : " << temp->data << " --> " << temp->Next_Node << endl;
}

//* to insert in tail
// void inter_in_tail(Node *&head, int data)
// {

//     Node *temp = new Node(data);
//     if (head == nullptr)
//     {
//         head = temp;
//         return;
//     }
//     Node *tail = head;

//     while (tail->Next_Node != nullptr)
//     {
//         tail = tail->Next_Node;
//     }

//     tail->Next_Node = temp;
// }

void print_list(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is Empty to Print " << endl;
        return;
    }
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->Next_Node;
    }
}
void delete_list(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is Empty to Delete" << endl;
        return;
    }

    Node *temp = nullptr;
    while (head != nullptr)
    {
        temp = head;
        head = head->Next_Node;
        delete temp;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = nullptr;

    insert_in_head(head, 100);
    insert_in_head(head, 200);
    insert_in_head(head, 300);
    insert_in_head(head, 400);

    print_list(head);

    delete_list(head);
    print_list(head);

    return 0;
}
