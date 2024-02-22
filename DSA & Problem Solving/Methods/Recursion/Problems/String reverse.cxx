// Two pointer 

#include<iostream>
using namespace std;

void rev(int i , int j , string &str)
{
	if(i>j)
	return;
	
	swap(str[i],str[j]);
	i++;
	j--;
	
	rev(i , j , str);
	
}
int main(){
	string st = "abcd";
	
	rev(0 , st.length()-1, st) ; 
	
	cout<<st;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// one pointer 

#include<iostream>
using namespace std;

void rev(int i  , string &str)
{
	if(i>str.length()-1-i)
	return;
	
	swap(str[i],str[str.length()-1-i]);
	i++;
	
	rev(i , str);
	
}
int main(){
	string st = "abcs";
	
	rev(0 , st) ; 
	
	cout<<st;
}
