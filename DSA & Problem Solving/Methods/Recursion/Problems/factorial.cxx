/*
Hamza
23
topic: Factorial in Recursion
*/

#include <iostream>
using namespace std;

int print(int n)
{
   if (n == 0)
      return 1;

   if (n == 1)
      return 1;

   return  (n * print(n-1));
}

int main(int argc, char const *argv[])
{
   cout<<print(5);

   return 0;
}
