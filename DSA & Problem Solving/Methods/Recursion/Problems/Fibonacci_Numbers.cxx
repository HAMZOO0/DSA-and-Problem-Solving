// Recusion tree is on notion 

#include <iostream>
using namespace std;

int feb(int n)
{
    if(n<2)
    return n ; 
    
    return feb(n-1) +  feb(n-2);
}

int main() {
    
int n = 5 ;

int j = feb(n);

cout<<j<<endl;
    return 0;
}
