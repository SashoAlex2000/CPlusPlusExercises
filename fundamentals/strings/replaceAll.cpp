#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>


int main() {

    std::string str;

    std::getline(std::cin, str);

    std::string toReplace;
    std::getline(std::cin, toReplace);

    std::string newString;
    std::getline(std::cin, newString);

    std::cout << str << std::endl;
    std::cout << toReplace << std::endl;
    std::cout << newString << std::endl;

    int lengthOfReplacement = newString.length();

    for (int i = 0; i < str.length(); i++) {

        char currentChar = str.at(i);

        if (currentChar == toReplace[0]) {
            int passed = 0;
            bool invalid = false;
            for (int k = i; k < i + lengthOfReplacement; k++) {
                if (str[k] != toReplace[passed]) {
                    invalid = true;
                    break;
                }
                passed++;
            }
            passed = 0;
            if (!invalid) {
                for (int k = i; k < i + lengthOfReplacement; k++) {
                    str[k] = newString[passed];
                    passed++;
                }

                int diff = toReplace.length() - newString.length();

                if (diff > 0) {
                    str.erase((i+(newString.length())), diff);
                }

            }

        }

    }

    std::cout << str << std::endl;

}
