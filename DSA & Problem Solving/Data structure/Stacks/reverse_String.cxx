/*
Hamza
23
topic:
*/
#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
    string name = "jani";
    stack<char> st;

    for (int i = 0; i < name.size(); i++)
    {
        char ch = name[i];
        st.push(ch);
    }
    while (!st.empty())
    {
        cout << st.top() << "";
        st.pop();
    }

    return 0;
}