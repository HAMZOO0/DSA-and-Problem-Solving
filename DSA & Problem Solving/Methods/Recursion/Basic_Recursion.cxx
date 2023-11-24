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
    print(n+1); // this is tail recursion
    //Becuse this is last statemnt of this function and it call it self but there are some funcions which are head recursion like f(n-1)+f(n-2) ,
    //this type of function are head recursion becuse in this type of function the  function call iteself but its laste statement also a first one which i mentoion 
    
}

int main(int argc, char const *argv[])
{
    print(1);

return 0;
}
