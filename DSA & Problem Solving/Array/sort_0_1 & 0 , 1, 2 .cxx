//  0 1 sort 
#include <iostream>
#include <algorithm>
using namespace std;

void swaap(int *arr, int size)
{
  int  L = 0 , R = size-1; 

    while (L<R)
    {
       while (arr[L]==0 && L<R)
       {
        L++;
       }
       while (arr[R]==1 && L<R)
       {
        R--;
       }
       // yahn pr loop a gy toh mtlb arr[l]==1 ha ior arr[R]==0 ha to humy in ko swap kr dana ah 
       swap(arr[L],arr[R]);
       L++;
       R--;
    }
    
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 0, 0, 1, 0};
    // sort(arr,arr+5); this can solve this but i am learning manual method

    swaap(arr, 5);
    print(arr, 5);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sort 0 1 2 
#include<iostream>
#include<algorithm>
using namespace std;

void swaap(int *arr , int size)
{
    for (int  i = 0; i < size-1; i++)
    {
       for (int j = i+1 ; j < size; j++)
       {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
       }
       
    }
    
}

void print(int *arr , int size)
{
    for (int  i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}


int main(int argc, char const *argv[])
{
    int arr[6] = {2,0,2,1,1,0};
    // sort(arr,arr+5); this can solve this but i am learning manual method

    swaap(arr, 6);
    print(arr, 6);

    return 0;
}
