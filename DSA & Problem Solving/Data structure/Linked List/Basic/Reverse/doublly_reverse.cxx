#include <iostream>
using namespace std;
class doublly
{
public:
    int data;
    doublly *next;
    doublly *prev;
    doublly(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    void add(int data, doublly *&head)
    {
        doublly *new_node = new doublly(data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        else
        {
            doublly *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
            return;
        }
    }

    void print(doublly *head)
    {
        doublly *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void reverse(doublly *&head)
    {
        doublly *current = head;
        while (current != NULL)
        {
            swap(current->prev, current->next);
            current = current->prev;

            if (current != NULL && current->next == NULL)
            {
                head = current;
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    doublly *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        head->add(i, head);
    }

    head->reverse(head);
    head->print(head);
    return 0;
}
