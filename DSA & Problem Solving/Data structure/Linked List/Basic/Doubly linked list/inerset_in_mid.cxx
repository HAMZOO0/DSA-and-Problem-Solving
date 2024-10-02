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

    if (temp == NULL)
    {
        cout << "invalid position";
    }
    NEW_NODE_TO_INSert->Next_node = temp->Next_node;

    NEW_NODE_TO_INSert->previous_node = temp;

    temp->Next_node = NEW_NODE_TO_INSert;
}
