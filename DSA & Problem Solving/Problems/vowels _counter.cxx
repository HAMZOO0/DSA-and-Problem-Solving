#include <iostream>
#include <string>

int main() {
    std::string input , vovwal  ="aeiouAEIOU";
    int count = 0; 
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Loop through each character in the input
    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];

        // Check if the character is a vowel
        if (vovwal.find(currentChar) != -1) {
            count++;
        }
    }

    std::cout << "The number of vowels in the string is: " << count << std::endl;
    return 0;
}
