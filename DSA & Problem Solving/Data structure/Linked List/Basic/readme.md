# Singly Linked List: Concepts and Operations

## 1. Introduction to Linked Lists
Linked List: A linear data structure where each element (node) points to the next element.
Node: Contains data and a pointer to the next node.
Head: The first node in a linked list.

## 2. Node Structure
A node typically has:

Data: Stores the value.
Next_Node: A pointer to the next node in the list.
Node Class Implementation
```
Copy code
class Node {
public:
    int data;
    Node* Next_node;

    // Constructor to initialize a node
    Node(int val) : data(val), Next_node(nullptr) {}
};
3. Insertion Operations
a. Insert at Tail
Adds a node to the end of the list.
cpp
Copy code
void insert_in_tail(Node*& head, int data) {
    Node* temp = new Node(data); // Create a new node
    if (head == nullptr) { // If the list is empty
        head = temp; // The new node becomes the head
        return;
    }

    Node* tail = head;
    while (tail->Next_node != nullptr) { // Traverse to the last node
        tail = tail->Next_node;
    }
    tail->Next_node = temp; // Link the last node to the new node
}
b. Insert at Middle
Adds a node at a specified position.
cpp
Copy code
void insert_in_mid(Node*& head, int data, int position) {
    if (position == 1) {
        Node* new_head = new Node(data); // Create a new head
        new_head->Next_node = head; // Link the new head to the existing list
        head = new_head; // Update head to the new node
        return;
    }

    Node* new_node = new Node(data);
    Node* temp = head;
    int count = 1;

    while (count < position - 1 && temp != nullptr) {
        temp = temp->Next_node; // Traverse to the node before the position
        ++count;
    }

    if (temp == nullptr) { // Position out of bounds
        cout << "Position out of bounds." << endl;
        delete new_node; // Cleanup the allocated node
        return;
    }

    new_node->Next_node = temp->Next_node; // Link the new node to the next node
    temp->Next_node = new_node; // Link the previous node to the new node
}

```


## 4. Deletion Operation
Delete Node by Position
Removes a node at a specified position.

```
Copy code
void delete_node(Node*& head, int position) {
    if (head == nullptr || position < 1) {
        cout << "Invalid position or empty list." << endl;
        return;
    }

    if (position == 1) { // If deleting the head
        Node* temp = head;
        head = head->Next_node; // Update head to the next node
        delete temp; // Delete the old head
        return;
    }

    Node* current_node = head;
    for (int i = 1; current_node != nullptr && i < position - 1; i++) {
        current_node = current_node->Next_node; // Traverse to the node before the position
    }

    if (current_node == nullptr || current_node->Next_node == nullptr) {
        cout << "Position is out of range." << endl;
        return;
    }

    Node* temp = current_node->Next_node; // Node to be deleted
    current_node->Next_node = temp->Next_node; // Link previous node to the next node

    delete temp; // Delete the node
}
```

## 5. Printing the Linked List
Traverses the list and prints each node’s data.
```
Copy code
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " "; // Print the data
        head = head->Next_node; // Move to the next node
    }
    cout << endl;
}
```

# 6. Full Example

Demonstrates creating a linked list, inserting elements, deleting an element, and printing the list.

```
int main(int argc, char const *argv[]) {
    Node* head = nullptr; // Initialize an empty list

    // Insert elements at the tail
    insert_in_tail(head, 2);
    insert_in_tail(head, 22);
    insert_in_tail(head, 202);

    cout << "Original Linked List: ";
    print(head); // Print the list

    // Insert elements at specific positions
    insert_in_mid(head, 15, 2); // Insert 15 at position 2
    insert_in_mid(head, 5, 1);  // Insert 5 at position 1 (head)

    cout << "Linked List after insertions: ";
    print(head); // Print the list

    // Delete node at position 1
    delete_node(head, 1);

    cout << "Linked List after deletion: ";
    print(head); // Print the list

    return 0;
}
```

# Summary of Key Points:   

Node Creation: A node contains data and a pointer to the next node.
 
Insertion:

Tail: Traverse to the end and add the node.

Middle: Traverse to the position and insert the node.
Deletion:
By Position: Remove the node at the specified position and update links.
Printing: Traverse the list and print node data.
