/* 
Hamza
23
topic:
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr [5] ={1,2,1,3,2};
    int ans{};

    for (int i = 0; i < 5; i++)
    {
        cout<<(ans ^ arr[i])<<" ";
       ans= ans ^ arr[i];
    }
    

return 0;
}
