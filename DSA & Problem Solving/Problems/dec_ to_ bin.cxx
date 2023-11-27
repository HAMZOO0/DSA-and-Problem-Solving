#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declare variables to store decimal input and binary result
    int dec, ans = 1;

    // Prompt user for decimal input
    cout << "Enter a decimal number: ";
    cin >> dec;

    // Create a vector to store binary digits
    vector<int> vec;

    // Convert decimal to binary
    while (dec != 0)
    {
        // Store the remainder (binary digit) in the vector
        vec.push_back(dec % 2);

        // Divide the decimal by 2 to get the next binary digit
        dec /= 2;
    }

    // Display the binary representation in reverse order
    cout << "Binary representation: ";
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i];
    }

    // Display the number of binary digits
    cout << endl << "Number of binary digits: " << vec.size();

    // Return 0 to indicate successful execution
    return 0;
}
