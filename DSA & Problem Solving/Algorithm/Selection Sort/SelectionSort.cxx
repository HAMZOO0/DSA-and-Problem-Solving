#include<iostream>
using namespace std;

void srt(int *arr)
{	
	for(int i = 0 ; i < 4 ; i++)
	{
		for(int j = i+1 ; j<5 ; j++ )
		{
			if(arr[i] > arr[j])
			{
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    	}
		}
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
