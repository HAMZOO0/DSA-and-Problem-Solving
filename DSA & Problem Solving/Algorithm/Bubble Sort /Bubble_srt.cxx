/*
Hamza
16-10-23
Bubble sort
*/
#include <iostream>
using namespace std;

void bb_srt(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 10, 0, 1, 9};
    int n = 5;

    bb_srt(arr, n);
    print(arr, n);

    return 0;
}
