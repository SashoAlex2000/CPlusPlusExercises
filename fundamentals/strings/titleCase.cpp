#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>

int main() {

    std::string str;
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, str);

    std::cout << "Bazinga";
    std::cout << str << std::endl;

    str[0] = toupper(str.at(0));

    for (int i = 1; i < str.length(); i++) {
        char currentChar = str.at(i);
        if (!isalpha(currentChar)) {
            str[i + 1] = toupper(str.at(i + 1));
        }
    }

    std::cout << str << std::endl;

}
