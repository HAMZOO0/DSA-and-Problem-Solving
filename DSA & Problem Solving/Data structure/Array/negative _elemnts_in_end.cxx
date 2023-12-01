//Write a C++ program to move all negative elements of an array of integers to the end of the array without changing the order of positive elements and negative elements.  
#include <iostream>
using namespace std;

int main() {
	int n = 9 ; 
    int arr[n] = {1, -2, 3, -4, 5, -6, 7, -8, 9};
   
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
		 {
        	swap(arr[i], arr[j]);
        	j++;
        }
    }
        
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
