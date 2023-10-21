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

int main(int argc, char const *argv[])
{
    int n = 7;
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};

    for (int i = 1; i < n; i++) // this loop is use to select a elements
    {
        int temp = arr[i];

        int j = i - 1;
        for (; j >= 0; j--)     // this loop use to compare the selected (i) element with i-1 elemts 
        {
            if (arr[j] > temp)   // if next (j) elemnts is less then previus one then we shift 
                arr[j + 1] = arr[j];   // |10|10|7| ...    temp =1 

            else
                break;
        }
        arr[j + 1] = temp;          //after that j value alwas like (j-1)
        //cout<<j<<" "; 


    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
