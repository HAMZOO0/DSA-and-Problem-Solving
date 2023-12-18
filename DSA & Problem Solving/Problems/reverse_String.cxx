#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
 
 string input , sub1 , sub2 ;
 getline(cin,input);
 
 reverse(input.begin() , input.end());
 
 for (int i = 0; i < input.length(); i++)
{
  if (input[i] == ' ')
  {
  sub1 = input.substr(0 ,  i);
  sub2 = input.substr(i , input.length());
  }
     
}	

reverse(sub1.begin() , sub1.end());
reverse(sub2.begin() , sub2.end());

string combine = sub1+' '+sub2;
cout<<combine; 

   return 0;
 
}
