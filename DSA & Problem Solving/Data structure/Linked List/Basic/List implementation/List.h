#include "Node.h"
#include <iostream>
using namespace std;
class List
{
private:
    Node *Head;
    Node *current;
    int size;

public:
    List()
    {
        this->Head = new Node;
        Head->set_next_node(nullptr);
        // this->current = Head;
        current = nullptr;
        size = 0;
    }

    void add(int data)
    {
        Node *new_node = new Node; // here we create new node
        new_node->set_data(data);  // here we add data

        // IF it is the first node
        if (current == nullptr)
        {
            new_node->set_next_node(nullptr);
            Head->set_next_node(new_node);
            current = new_node;
        }

        else
        {
            new_node->set_next_node(nullptr);
            current->set_next_node(new_node);
            current = new_node;
        }
        size++;
    }

    int get()
    {
        if (current != nullptr)
        {
            return current->get_data();
        }
    }

    void delete_all()
    {
        Node *current_node = Head->get_next_node(); // start from the first node after Head
        while (current_node != nullptr)
        {
            Node *temp = current_node;
            current_node = current_node->get_next_node();
            delete temp;
        }

        Head->set_next_node(nullptr); // reset the Head pointer
        current = nullptr;
        size = 0;
    }

    void print()
    {
        current = Head->get_next_node();

        while (current != nullptr)
        {
            cout << current->get_data() << " \n";
            current = current->get_next_node();
        }
    }
};
