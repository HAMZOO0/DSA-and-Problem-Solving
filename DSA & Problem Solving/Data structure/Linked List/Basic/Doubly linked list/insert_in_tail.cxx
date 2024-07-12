void _tail(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    // here we traverse to last node
    Node *tail = head;
    while (tail->Next_node)
    {
        tail = tail->Next_node;
    }

    tail->Next_node = temp;

    temp->previous_node = tail;
}
