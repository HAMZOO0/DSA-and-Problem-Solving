#include <iostream>
#include <vector>
using namespace std;

// Global vector to store individual digits of the entered number
vector<int> num_stor;

// Array to map digit to corresponding word representation
string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

// Function to recursively extract and store individual digits of the number
void say_num(int n)
{
    // Base case: if the number is zero or negative, return
    if (n == 0 || n < 0)
        return;

    // Extract the last digit of the number and store it in the vector
    num_stor.push_back(n % 10);

    // Recursively call the function with the remaining digits
    say_num(n / 10);
}

int main(int argc, char const *argv[])
{
    // Variable to store the user-entered number
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to extract and store individual digits in num_stor vector
    say_num(n);

    // Display the number in words in reverse order
    cout << "Number in words (in reverse order): ";
    for (int i = num_stor.size() - 1; i >= 0; i--)
    {
        // Access the corresponding word representation from the array and print
        cout << arr[num_stor.at(i)] << " ";
    }

    // Return 0 to indicate successful program execution
    return 0;
}
