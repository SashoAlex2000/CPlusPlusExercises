#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>

int main() {
    std::string myString = "Hello ( World";
    char character = myString.at(6);  // Getting character at index 6

    if (character == '(') {
        std::cout << "The character is equal to '('" << std::endl;
    } else {
        std::cout << "The character is not equal to '('" << std::endl;
    }

    return 0;
}