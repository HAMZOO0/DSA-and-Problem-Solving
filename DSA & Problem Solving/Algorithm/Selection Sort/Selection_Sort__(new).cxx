/*
Space Complexity : O(1)

Time Complexity : O(n^2) ---> Worst case || Best case 

*/
#include<iostream>
using namespace std;

void srt(int *arr)
{	
	for(int i = 0 ; i < 4 ; i++)
	{
		int index  = i ; 
		for(int j = i+1 ; j<5 ; j++ )
		{
			if(arr[j]<arr[index])
				index = j;	  
		}
			swap(arr[index] , arr[i]);
	}
}

void print (int *arr)
{
	for(int i = 0 ; i <5 ; i++)
	{
	cout<<arr[i]<<" ";
    }
}

int main()
{	
	int arr[5]={2,6,1,7,8}; 
	
	srt(arr);
	print (arr);
		
}

/*

 1st iteration  == { 1 ,  6 , 2 , 7 , 8 }
 2nd  ======        {1,2,6,7,8}


*/
