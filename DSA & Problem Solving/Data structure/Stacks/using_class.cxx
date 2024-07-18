/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int *arr;
    int top;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int elemnt)
    {

        // here we check shoud we have empty space is aviable or not
        if ((size - top) > 1)
        {
            ++top;
            arr[top] = elemnt;
        }
        // if not empty
        else
        {
            cout << " Stack is Full" << endl;
        }
    }

    void pop()
    {

        // is this stack is empty
        if (top >= 0)
        {
            --top;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }

        else
        {
            cout << "Stack is empty ";
            return -1;
        }
    }

    bool is_empty()
    {
        if (top > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ~stack()
    {

        delete[] arr;
        arr = nullptr;
    }
};

int main(int argc, char const *argv[])
{
    stack stk(3);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.pop();

    cout << stk.peek() << endl;
    // cout << stk.is_empty() << endl;

    return 0;
}