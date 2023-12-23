// in this program i write 2 methods
// method # 1 

int sum = 0;
int fun(int n)
{
  if (n == 0)
    return sum;

  if(n%10 == 0 )
  sum++ ; 

  return fun(n / 10);
}

int main(int argc, char const *argv[])
{
  int n1 = 1001;
  cout<< fun(n1);
}
//////////////////////////////////////////////////////////////////////

// method # 2 

#include <iostream>
using namespace std;

int fun(int n, int count)
{
  if (n == 0)
return count;


    if (n % 10 == 0)
      return fun(n / 10, ++count);

    else
      return fun(n / 10, count);
}

int main(int argc, char const *argv[])
{
  int n1 = 1001;
  cout << fun(n1, 0);

  return 0;
}
