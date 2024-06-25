/*
Hamza
23
topic: recursion
*/
#include <iostream>
using namespace std;
void foo(int r, int c)
{
    if (r <= 0)
    {
        return;
    }
    if (r == c)
    {

        cout << endl;
        r -= 1;
        c = 0;
        return foo(r, c);
    }

    cout << " * ";

    return foo(r, c + 1);
}
int main(int argc, char const *argv[])
{
    int r = 4, c = 0;

    foo(r, c);

    return 0;
}
