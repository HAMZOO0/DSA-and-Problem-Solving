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
    int top_1;
    int top_2;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top_1 = -1;
        top_2 = size;
    }

    void push_1(int elemnt)
    {

        // here we check shoud we have empty space is aviable or not
        if ((top_2 - top_1) > 1)
        {
            ++top_1;
            arr[top_1] = elemnt;
        }
        // if not empty
        else
        {
            cout << " Stack is Full" << endl;
        }
    }
    void push_2(int elemnt)
    {

        // here we check shoud we have empty space is aviable or not
        if ((top_2 - top_1) > 1)
        {
            --top_2;
            arr[top_2] = elemnt;
        }
        // if not empty
        else
        {
            cout << " Stack is Full" << endl;
        }
    }

    void pop_1()
    {

        // is this stack is empty
        if (top_1 >= 0)
        {
            --top_1;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }

    void pop_2()
    {

        // is this stack is empty
        if (top_2 < size)
        {
            ++top_2;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }
    int peek_1()
    {
        if (top_1 >= 0 && top_1 < size)
        {
            return arr[top_1];
        }

        else
        {
            cout << "Stack is empty ";
            return -1;
        }
    }
    int peek_2()
    {
        if (top_2 >= 0 && top_2 < size)
        {
            return arr[top_2];
        }

        else
        {
            cout << "Stack is empty ";
            return -1;
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
    stk.push_1(1);
    stk.push_2(2);
    stk.push_2(3);

    stk.pop_2();

    cout << stk.peek_1() << endl;
    cout << stk.peek_2() << endl;
    // cout << stk.is_empty() << endl;

    return 0;
}