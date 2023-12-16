#include <iostream>
using namespace std;

int counter = 0 ; 

int count (int n )
{
    if ( n <1 )
    {
        return counter; 
    } 

    if (n % 10 == 0)
    {
      counter += 1;
    }

    return count(n/10);

}

int main()
{
  int n = 10;
 

  cout << count(n);

  return 0;
}
