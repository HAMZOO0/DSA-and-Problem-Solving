#include <iostream>
#include <cstring>

using namespace std;

// Function to check if a character is a valid alphanumeric character
bool CharChecker(char ch)
{
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return 1;
    }
    return 0;
}

// Function to create a valid string containing only alphanumeric characters
string valid_string_maker(string s)
{
    string temp{};

    for (int i = 0; i < s.length(); i++)
    {
        if (CharChecker(s[i]))
            temp.push_back(s[i]);
    }
    return temp;
}

// Function to convert uppercase characters to lowercase in a string
string capital_to_small(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = ((s[i] - 'A') + 'a');
    }
    return s;
}

// Function to reverse a string
string reverse_maker(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
    return s;
}

int main()
{
    // Test string
    string s = "A man, a plan, a canal: Panama";

    // Create a valid string with only alphanumeric characters
    string valid_Str = valid_string_maker(s);

    // Convert uppercase characters to lowercase
    valid_Str = capital_to_small(valid_Str);

    // Reverse the valid string
    string reverse_Str = reverse_maker(valid_Str);

    // Check if the reversed string is equal to the original, indicating a palindrome
    if (reverse_Str == valid_Str)
        cout << "True";
    else
        cout << "False";
}
