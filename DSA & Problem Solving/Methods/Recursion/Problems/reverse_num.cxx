
// method # 1 
void reverse(int n)
{

   // base condition to end recursive calls
   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}

// method  # 2 

int sum = 0;
int fun(int n)
{
  if (n == 0)
    return sum;

  sum = (sum* 10) + (n % 10);
  return fun(n / 10);
}

