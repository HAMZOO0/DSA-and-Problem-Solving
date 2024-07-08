/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;

// Node class representing each node in the linked list
class Node {
public:
    int data;           // Data stored in the node
    Node* Next_Node;    // Pointer to the next node

    // Constructor to initialize the node with data
    Node(int data) : data(data), Next_Node(nullptr) {}
};

// Function to insert a new node at the tail of the linked list
void insert_in_tail(Node*& head, int data) {
    Node* temp = new Node(data); // Create a new node with the provided data

    // If the list is empty, make the new node the head of the list
    if (head == nullptr) {
        head = temp;
        return;
    }

    // Traverse the list to find the last node
    Node* tail = head;
    while (tail->Next_Node) {
        tail = tail->Next_Node;
    }

    // Insert the new node at the end of the list
    tail->Next_Node = temp;
}

// Function to print the linked list starting from the given head node
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";   // Print the data of the current node
        head = head->Next_Node;      // Move to the next node
    }
    cout << endl;
}

// Main function to demonstrate the linked list operations
int main(int argc, char const *argv[]) {
    Node* head = nullptr; // Initialize an empty list

    // Insert elements at the tail of the list
    insert_in_tail(head, 22);
    insert_in_tail(head, 40);
    insert_in_tail(head, 80);
    insert_in_tail(head, 120);

    // Print the linked list
    cout << "Linked List: ";
    print(head);

    return 0; // Return 0 to indicate successful execution
}
