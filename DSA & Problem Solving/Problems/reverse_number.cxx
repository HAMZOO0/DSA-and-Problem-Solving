/*
Hamza
23
topic: reverse the number like 123 == 321 
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int number, reminder = 0, result = 0;
    cin >> number;

    if (number <= 0)
    {
        cout << "False";
    }

    else
    {
        while (number > 0)
        {
            reminder = number % 10; // get the last number digit  123 -- > 321

            result = (reminder + result) * 10;

            number /= 10; // reduce the number like 12.1 | 1.2 .. /0
        }
    }
    cout << result/10 << " ";

    return 0;
}
