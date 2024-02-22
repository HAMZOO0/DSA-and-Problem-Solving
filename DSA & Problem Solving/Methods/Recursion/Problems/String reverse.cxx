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
