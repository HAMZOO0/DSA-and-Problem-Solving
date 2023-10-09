#include<iostream>
using namespace std;

int root_finder(int num)
{
	int start=0;
	int end = num;
	int mid = start + (end -start)/2;
	
	while(start<=end )
	{
		int square = mid * mid; // here we square the mid to check is it equal to atual value 
		
		if(square == num  )  // if it is equal then answer is mid 
		return mid; 
		
		else if (square > num)  // if mid sqaure is greter then acutal value then the its means 7*7= 49 . 49 > 36 so we put end to mid 
		{
		end = mid-1;
		cout<<"End "<<end<<endl;
		}
		
		else // square < num      
		{start = mid+1 ;     // if start
		cout<<"start "<<start<<endl;
	}
	
		
		mid = start + (end -start)/2;
		
	}
	return -1;
	
}

int main()
{
	int num = 36  ; 
cout<<" Root is "<<root_finder(num)<<endl;
	
	
}
