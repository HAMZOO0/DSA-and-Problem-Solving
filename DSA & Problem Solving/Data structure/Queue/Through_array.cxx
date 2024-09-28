/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;
class Queue
{

    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s)
    {

        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    ~Queue()
    {

        delete[] arr;
    }

    bool isEmpty()
    {

        if (front == -1 && rear == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {

        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return true;
        }
        // cout << "Queue is Not Full " << endl;

        return false;
    }

    void enqueue(int data)
    {

        if (isFull())
        {
            return;
        }
        rear++;
        arr[rear] = data;
        // cout << endl
        //      << "rar is " << rear << "  , data: " << data << " , size" << size << endl;
    }

    void dequeue()
    {

        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
        arr[front] = -1;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])

{

    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.print();
    return 0;
}
