#include <iostream>
using namespace std;

int sum = 0;
int fun(int n)
{
  if (n == 0)
    return sum;

  sum = (sum * 10) + (n % 10);
  return fun(n / 10);
}

int main(int argc, char const *argv[])
{
  int n1 = 121;
  int n2 = fun(n1);

  if (n1 == n2)
    cout << "True";

  else
    cout << "FALSE";

        return 0;
}
