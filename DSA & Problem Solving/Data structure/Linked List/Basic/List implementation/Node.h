class Node
{
private:
    int data;
    Node *next;

public:
    // get method for data
    int get_data()
    {
        return this->data;
    }

    // get method for next node
    Node *get_next_node()
    {
        return this->next;
    }

    // setters for data and next
    void set_data(int data)
    {
        this->data = data;
    }

    void set_next_node(Node *next)
    {
        this->next = next;
    }
};