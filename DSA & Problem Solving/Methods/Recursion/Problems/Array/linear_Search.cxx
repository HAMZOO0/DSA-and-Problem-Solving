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

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// count the number of occurence 

vector<int> stor;

void check(int *arr, int index, int length, int target)
{
    if (index == length)
        return;

    else if (arr[index] == target)
    {
        stor.push_back(index);
        check(arr, index + 1, length, target);
    }

    else
        return check(arr, index + 1, length, target);
}

int main()
{

    int arr[] = {1, 24, 4, 4, 4};
    int index = 0;
    int size = 5;
    int target = 4;

    check(arr, index, size, target);

    for (int i = 0; i < stor.size(); i++)
    {
        cout << stor[i] << " ";
    }
}
