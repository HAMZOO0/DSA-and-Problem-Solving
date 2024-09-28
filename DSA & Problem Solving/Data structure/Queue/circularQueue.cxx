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
        // start from zero bcz we want to add in circular way
        front = 0;
        rear = 0;
    }
    ~Queue()
    {

        delete[] arr;
    }

    bool isEmpty()
    {

        if (front == rear)
        {
            front = 0;
            return true;
        }
        return false;
    }

    bool isFull()
    {

        // for circular queue , if rear+1 == front it means queue is full
        if ((rear + 1) % size == front)
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
        rear = (rear + 1) % size; // we are using circular queue so we need to make it circular so need jsut increase rear we make formular to make it ciruclar

        arr[rear] = data;
    }

    void dequeue()
    {

        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front = ((front + 1) % size);
        cout << "---> front ==>> " << (front + 1) % size << endl;
        arr[front] = -1;
    }

    void print()
    {

        cout << "front " << front << " rear " << rear << endl;

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

    q.enqueue(10);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.print();

    q.dequeue();

    q.print();

    q.enqueue(400);

    q.print();

    return 0;
}
