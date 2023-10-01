// Hamza
// 1 / 10 / 23
// Binary Search
// First and Last Position of an Element In Sorted Array
// Complexity o (logn)

/*
In this code we find 1st and last occurrence of elemnt like 

{1,2,3,4,5,6,3}

* so 1st occurrence of 3 is 2 
* and last occurrence 3 is 6
*/



#include <iostream>
#include <algorithm>
using namespace std;

int first_pos(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // (end + start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key)
            start = mid + 1;

        else // arr[mid] > key
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int last_pos(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // (end + start) / 2;
    int ans = -1;
    
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < key)
            start = mid + 1;

        else // arr[mid] > key
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 3, 9, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    int first_index = first_pos (arr, size, 3);
    int last_index  =  last_pos (arr, size, 3);

    cout << " (3s) 1st element is store in index :: " << first_index << endl;
    cout << " (3s) 1st element is store in index :: " << last_index << endl;

    return 0;
}
