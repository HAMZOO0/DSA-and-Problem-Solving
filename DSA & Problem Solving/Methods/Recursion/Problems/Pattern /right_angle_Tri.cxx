/*
Hamza
23
topic: recursion
*/
#include <iostream>
using namespace std;
void foo(int r, int c)
{
    if (r < 0) //base case 
    {
        return;
    }


    if (r == c)
    {
         foo(r-1, c=0);
        cout << endl;
       
    }

else{
     foo(r, c + 1);
    cout <<" * ";
    }

}
int main(int argc, char const *argv[])
{
    int r = 4, c = 0;

    foo(r, c);

    return 0;
}

// *
// **
// ***
