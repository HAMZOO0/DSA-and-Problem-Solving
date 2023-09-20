#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int bin{};  // binary variable
    int dec = 0; 
    int i = 0;  //   use to power after one iterration 
    cin >> bin;

    while (bin != 0)     
    {
        if(bin%2 == 1 ){     // here we check binary number which digit is like if 1  then we add 2^i and add in dec 
        dec += pow(2, i);
        }

        bin =bin/ 10;   //  devide by 10 use to decrese the number by 1 
        i++;
    }
    std::cout << dec;

    return 0;
}
