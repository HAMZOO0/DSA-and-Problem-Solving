#include <iostream>
#include <algorithm>
using namespace std;

int bin_serch(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (end + start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;

        mid = (end + start) / 2;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 12, 20, 60, 100, 102};

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = bin_serch(arr, size, 102); // 102 is key to find

    cout << "102 is stored on index = " << index;

    return 0;
}
