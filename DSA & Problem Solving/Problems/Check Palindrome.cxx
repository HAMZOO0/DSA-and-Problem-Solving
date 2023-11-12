#include <iostream>
using namespace std;

/**
 * Function to reverse a given string
 * 
 * @param arr The string to be reversed
 * @param size The size of the string
 * @return The reversed string
 */
string reverse(string arr, int size)
{
    int start = 0;
    int end = size - 1;

    // Swapping characters from start to end
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}

/**
 * Main function where the program execution begins
 * 
 * @param argc Number of command-line arguments
 * @param argv Array of command-line arguments
 * @return 0 on successful execution
 */
int main(int argc, char const *argv[])
{
    // Input string
    string st = "oll";

    // Variable to store the reversed string
    string rever_st;

    // Calling the reverse function and storing the result
    rever_st = reverse(st, st.length());

    // Checking if the original string is equal to its reverse
    if (st == rever_st)
        cout << "True";
    else
        cout << "False";

    return 0;
}
