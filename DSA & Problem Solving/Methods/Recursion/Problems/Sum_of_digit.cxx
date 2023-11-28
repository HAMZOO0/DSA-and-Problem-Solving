#include <iostream>
using namespace std;

int show(int n)
{
        int m =0; 

   if(n == 0 )
   return 0; 

   m = n % 10;
 return  m +  show  (n/10);
 
 
}

int main()
{
   int s = show(123);
   cout << s;
   return 0;
}
