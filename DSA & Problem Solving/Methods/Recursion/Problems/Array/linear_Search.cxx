/*
Hamza
23
topic: recursion
*/
#include <iostream>
using namespace std;
bool foo(int *arr, int start, int end)
{
    if (start == end)
    {
        return true;
    }

    else if (arr[start] > arr[start + 1])
    {
        return false;
    }

    start++;
    return foo(arr, start, end);
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4};

    bool check = foo(arr, 0, 4);

    if (check)
    {
        cout << "sorted";
    }

    else
        cout << "not";

    return 0;
}
