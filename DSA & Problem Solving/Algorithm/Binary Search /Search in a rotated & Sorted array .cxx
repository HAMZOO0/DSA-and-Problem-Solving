/*
Hamza
7/10/23
topic: Searching a elemnt in rotated and sorted array .

Approach ::-> {7, 9, 1, 2, 3} this is array 1st we need to find 2 so we first find pivot elemnt so we now 3 value start , 
end and pviot so 2nd we check is 2 is in 1st line  (7,9) or in 2nd line (1,2,3) . 3rd after we find the line then
we put the line in which key is present we put the line 1st and last elemnts in bianry search function 
*/

#include <iostream>
using namespace std;

// function to find pivot element by using binary search 
int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    for (; start < end;)
    {
        if (arr[mid] > arr[0])
            start = mid + 1;

        else
            end = mid;

        mid = start + (end - start) / 2;
    }
    return start;
}

// function to find key by using binary search 
int binrysrch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(int argc, char const *argv[])
{

    int arr[5] = {7, 9, 1, 2, 3}; 

    int key = 9; // target value is present in key variable 

    int pivot_ele = pivot(arr, 5); // Here we get pivot element

    if (key >= arr[pivot_ele] && key <= arr[4]) // conditon to check , is this key is present in 2nd line 
    {
        cout << "key is in index ::-> " << binrysrch(arr, pivot_ele, 4, key);
    // we key is in 2nd line so we put pivot as a start of arry
    }

    else
        cout << "key is in index ::-> " << binrysrch(arr, 0, pivot_ele, key); // we key is in 1line then pivot as a end of array

    return 0;
}
