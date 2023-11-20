/* 
Hamza
23
topic: Recursion   
*/
#include<iostream>
using namespace std;

void print(int n)
{
    if(n>5)
    return;

    cout<<n<<" ";
    print(n+1);
}

int main(int argc, char const *argv[])
{
    print(1);

return 0;
}
