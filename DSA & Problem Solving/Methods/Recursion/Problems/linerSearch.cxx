#include <iostream>
using namespace std;

bool check(int *arr, int index, int length, int target)
{
    if (index == length)
        return false;

    else if (arr[index] == target)
        return true;

    else
        return check(arr, index + 1, length, target);
}

int main()
{

    int arr[] = {1, 24, 3, 4, 45};
    int index = 0;
    int size = 5;
    int target = 4;

    if (check(arr, index, size, target))
        cout << " True";

    else
        cout << "False ";
}

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
