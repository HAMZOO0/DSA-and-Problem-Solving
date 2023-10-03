#include<iostream>
using namespace std;

int First_occr (int *arr , int size , int key)
{
	int start = 0;
	int end = size-1;
	int mid = start + (end-start) / 2 ; 
	int ans=-1;
	
	while(start <= end)
	{
		if(key == arr[mid])
		{
			ans = 	mid;
			end = mid -1 ; 
		}
		
		else if ( key > arr[mid])
		{
			start = mid +1 ; 
		}
		
		else  // key < arr[mid]
		{
			end = mid - 1 ; 
		}
		mid = start + (end-start) / 2 ; 
	}
	return ans ; 
	
}

int Last_occr(int *arr , int size , int key)
{
		
	int start = 0;
	int end = size-1;
	int mid = start + (end-start) / 2 ; 
	int ans = 0 ; 
	
	while(start <= end)
	{
		if (key == arr[mid])
		{
			ans = mid ; 
			start = mid +1 ; 
		}
		
		else if (key < arr[mid])
		{
				start = mid +1 ; 
		}
		
		else
		{
		end = mid -1 ; 
	}
	
     	mid = start + (end-start) / 2 ; 
		
	}
	return ans ; 
	
}


int main()
{
	int arr[6] = {1,2,3,3,3,4}; // 2 --  3 
	int Total_Number_of_occurence = ( Last_occr (arr,5,3) -  First_occr (arr,5,3))+1  ;
	
	cout<<Total_Number_of_occurence;
	
	//cout<<"Fist occrence of 3 is  = "<<First_occr (arr,5,3)<<endl ; 
    //	cout<<"Last  occrence of 3 is = "<<Last_occr (arr,5,3)<<endl;
  
  	//Total Number of occurence 

		
}
