/*
Hamza
23
topic:
*/
#include <iostream>
#include <stack>
using namespace std;

void remove_middle(stack<int> &st, int size, int count)
{

    if (count == (size / 2))
    {
        st.pop();

        return;
    }

    int num = st.top();
    st.pop();

    remove_middle(st, size, count + 1);

    st.push(num);
}

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    int count = 0;
    remove_middle(st, st.size(), count);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}