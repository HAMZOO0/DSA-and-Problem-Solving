# Doubly Linked List in C++

This project implements a Doubly Linked List (DLL) using C++. The list supports operations such as insertion, deletion, searching, and traversal. The list allows for forward and backward traversal, making it more versatile than a singly linked list.

## Features

- **Add nodes**: You can add nodes at the head, tail, or a specific position in the list.
- **Delete nodes**: You can delete nodes from a specific position or clear the entire list.
- **Search nodes**: You can search for nodes containing specific data.
- **Traversal**: You can print the list from head to tail or from tail to head.

## Classes and Structure

### 1. `Node.h`

This file contains the `Node` class, which has three attributes:
- `data` (int): stores the value of the node.
- `next` (Node*): pointer to the next node.
- `previous` (Node*): pointer to the previous node.

### 2. `DoublyLinkedList.h`

This file contains the `DoublyLinkedList` class with the following functionalities:
- `add_in_head(int data)`: Adds a node at the head.
- `add_in_tail(int data)`: Adds a node at the tail.
- `add_in_pos(int data, int pos)`: Adds a node at a specified position.
- `delete_pos(int pos)`: Deletes a node at a specified position.
- `Head_to_tail_print()`: Prints the list from head to tail.
- `tail_to_head_print()`: Prints the list from tail to head.
- `search(int data)`: Searches for a node containing the specified data.
- `delete_all()`: Clears the entire list.

## How to Run the Program

1. Compile the code using a C++ compiler.
   ```bash
   g++ main.cxx -o list
