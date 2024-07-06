/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;

class Node
{
public:
   int data;       // Data stored in the node
   Node *nextNode; // Pointer to the next node

   // Constructor to initialize the node with data
   Node(int val) : data(val), nextNode(nullptr) {}
};

// Function to insert a new node at the head of the list
void insert_in_head(Node *&head, int data)
{
   Node *temp = new Node(data); // Create a new node with the provided data
   temp->nextNode = head;       // Point the new node's next to the current head
   head = temp;              // Update head to point to the new node
}

// Function to print the linked list
void printList(Node *head)
{
   while (head)
   {
      cout << head->data << " ";
      head = head->nextNode;
   }
   cout << endl;
}

int main()
{
   Node *head = nullptr; // Initialize an empty list

   // Insert elements at the head
   insert_in_head(head, 22);
   insert_in_head(head, 10);

   // Print the list
   cout << "Linked List: ";
   printList(head);

   // Clean up memory
   Node *current = head;
   Node *next = nullptr;
   while (current)
   {
      next = current->nextNode;
      delete current;
      current = next;
   }

   return 0;
}
