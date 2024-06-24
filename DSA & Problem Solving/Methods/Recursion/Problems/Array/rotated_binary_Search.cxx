/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;

int search(int *arr, int key, int s, int e)
{
    if (s > e)
    {
        return -1;
    }

    // to find mid
    int m = s + (e - s) / 2;

    if (arr[m] == key)
    {
        return m;
    }

    if (arr[s] <= arr[m])
    {
        if (key >= arr[s] && key <= arr[m])
        {
          return  search(arr, key, s, m-1);
        }
        else
        {
           return search(arr, key, m+1, e);
        }
    }

    if (key >= arr[m] && key <= arr[e])
    {
       return search(arr, key, m + 1, e);
    }
    
       return search(arr, key, s, m - 1);

}

int main(int argc, char const *argv[])
{
    int arr[] = {
        5,
        6,
        1,
        2,
        3,
        4,
    };

    cout << search(arr, 6, 0, 5);
   

    return 0;
}
