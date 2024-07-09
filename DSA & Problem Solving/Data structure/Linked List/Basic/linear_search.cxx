bool linear_search(Node *head, int key)
{
    // Base case: if the list is empty, return false
    if (head == NULL)
    {
        return false;
    }

    // If the current node's data matches the key, return true
    if (head->Data == key)
    {
        return true;
    }

    // Recursive case: move to the next node
    return linear_search(head->Next_Node, key);
}
