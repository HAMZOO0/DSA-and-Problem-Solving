/*
Hamza
21-10-23
insertion sort

Time complexity
Best case time complexity is : O(n) 
worst case Time  complexity is : O(n^2)

Space complexity
O(1) 

*/

#include <iostream>
using namespace std;

// Function to perform insertion sort on an array
// Parameters:
//   arr: an integer array to be sorted
//   n: the number of elements in the array
void sort(int arr[], int n)
{
    // Traverse through the array starting from the second element
    for (int i = 1; i < n; i++)
    {
        // Store the current element in a temporary variable
        int temp = arr[i];

        // Move elements of arr[0..i-1] that are greater than temp
        // to one position ahead of their current position
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the current element (temp) at its correct position
        arr[j + 1] = temp;
    }
}

// Function to print the elements of an array
void print(int *arr, int n)
{
    // Iterate through the array and print each element
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 1, 11, 3, 5};

    sort(arr, 5);

    print(arr, 5);

    return 0;
}
