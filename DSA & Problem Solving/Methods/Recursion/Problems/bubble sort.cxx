#include<iostream>
using namespace std;

void  sortt(int *arr  , int n)
{
	if(n==0||n==1)
	return ;
	
	
	for(int i = 0 ; i <n ; i ++) {
		
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
			
		}
	}
	
	sortt(arr , n -1 );
//	n-1 bcz in buuble soort last elemnt is sort after 1 pass 
	
}

void print(int *arr  , int n)
{
	for(int i = 0 ; i< n ; i++)
	{
		cout<<arr[i]<<" ";
	}
}

 int main()
 {
 	
int arr [8] = {9,8,7,6,4,3,2,1};
sortt(arr,8);
print(arr,8);

 
 
}
