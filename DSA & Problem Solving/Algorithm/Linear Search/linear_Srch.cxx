#include <iostream>
using namespace std;

bool search(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if ( arr[i] == key)
            return 1;

    }
        
            return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 5, 4, 33, -5, 8, -44, 77, 4};
    int size = sizeof(arr) / sizeof (int);
    int key{};
    cout << "Enter Key :: ";
    cin >> key;

    bool find = search(arr, size, key);
    if (find )
    {
        cout << key << " Number Has Founded ";
    }
    else
    {
        cout << key << " Number Has Not Founded ";
    }

    return 0;
}
