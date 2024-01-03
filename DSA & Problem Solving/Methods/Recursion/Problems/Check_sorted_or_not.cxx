#include <iostream>
using namespace std;

bool check(int *arr, int index, int length)
{
    if (index == length)
        return true;

    else if (arr[index] < arr[index + 1])
    {
        return check(arr, index + 1, length);
    }

    else
        return false;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    if (check(arr, 0, 5))
        cout << "Sorted ha ya ";

    else
        cout << "Sorted  na ha ";
}
