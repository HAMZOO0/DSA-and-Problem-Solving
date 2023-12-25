/*
Hamza
23
topic:
*/
#include <iostream>
using namespace std;
void transpose(int (*p)[3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<p[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{

    int arr[3][3] = {{1, 3, 5},
                     {2, 4, 6},
                     {3, 4, 5}};

    transpose(arr);

    return 0;
}
