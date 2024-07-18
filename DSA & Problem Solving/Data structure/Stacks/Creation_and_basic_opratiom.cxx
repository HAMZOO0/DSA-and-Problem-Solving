/*
Hamza
23
topic: stack
*/
#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> phla;

    phla.push(1);
    phla.push(2);
    phla.push(3);

    // print the top most
    cout << phla.top() << endl;
    cout << "size of stack is :: " << phla.size() << endl;

    // swap two stacks
    stack<int> dosta;
    phla.swap(dosta);

    return 0;
}