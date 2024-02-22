#include<iostream>
using namespace std;

bool check_palindrome(int i , int j  ,  string str)
{
	if(i>j)
	return true;
	
	else if(str[i]!=str[j])
	return false ;
	
	i++;
	j--;
	
	check_palindrome(i , j , str);
	
}
int main(){
	string st = "kayak";
	
	bool test = check_palindrome(0 , st.length()-1, st) ; 
	if(test)
	{
		cout<<"palindrome";
	}
	
	else
	cout<<"Not palindrome";
}
