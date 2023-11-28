/*
Hamza
23
topic: Binary search in recursion 
*/
#include <iostream>
using namespace std;

int search(int arr[], int target, int start, int end)
{
    int mid;
    mid = start + (end - start) / 2;

    if (start > end)
        return -1;

    else if (target == arr[mid])
        return mid;

    else if (target < arr[mid])
        search(arr, target, start, mid - 1);

    else if (target > arr[mid])
        search(arr, target, mid + 1, end);

}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << search(arr, 5, 0, size);

    return 0;
}
