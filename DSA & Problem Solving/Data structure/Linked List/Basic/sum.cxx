int sum_of_node_Data(Node *head)
{

    if (head->Next_Node == NULL)
    {
        return head->Data;
    }

    return (head->Data + sum_of_node_Data(head->Next_Node));
}
