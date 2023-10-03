#include<iostream>
using namespace std;

//int peek (int *arr , int size )
//{
//	int start = 0;
//	int end = size-1;
//	int mid = start + (end-start) / 2 ; 
//	int ans=-1;
//	
//	while(start < end)
//	{
//		if( arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) //if mid value is == to peek then return mid 
//		{
//
//			return mid ; 
//		}
//	
//		else if (arr[mid] < arr[mid+1]) // if mid is less then the value next to mid then mid+1
//		{
//			start = mid +1 ; 
//		}
//		
//		else if (arr[mid] < arr[mid-1]) // if mid elemnt is less then previus one end = mid-1
//		{
//			end = mid-1  ; 
//		}
//		mid = start + (end-start) / 2 ; 
//	}
//
//	
//}


// Another method 
int peek (int *arr , int size )
{
	int start = 0;
	int end = size-1;
	int mid = start + (end-start) / 2 ; 
	int ans=-1;
	
	while(start < end)
	{
		if( arr[mid] < arr[mid+1]) 
         	start = mid +1 ; 
	
		else 
			end = mid-1  ; 
		
	
		mid = start + (end-start) / 2 ; 
	}
	return start ;	
}

int main()
{	 
  int arr[5] = {0,10,40,2,0}; 
  cout<< peek (arr,4)<<endl ;
	
		
}

/*
            500          --> peek 
        100     -
      91         -
    90             23
  10                -
 0                   -


*/
