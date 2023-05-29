#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>

bool isNumber(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::isdigit(s.at(i)) == 0)
            return false;
    }
    return true;
}

bool isNegativeNumber(const std::string &str) {
    if (str.empty())
        return false;

    if (str[0] == '-') {

        for (size_t i = 1; i < str.length(); i++) {
            if (!std::isdigit(str[i]))
                return false;
        }
        return true;
    }

    return false;
}

int main() {

    std::string arrayOfWords[25];

    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char charsFromConsole[100];
    std::cin.getline(charsFromConsole, 100);

    char separator = ' ';
    int i = 0;
    int indexCounterForWords = 0;
    std::string temp = "";
    int totalSum = 0;
    bool lastNumIsNegative = false;

    while (charsFromConsole[i] != '\0') {

        if (charsFromConsole[i] != separator) {
            temp += charsFromConsole[i];
        } else {

            if (isNumber(temp)) {
                totalSum += std::stoi(temp);
            } else if (isNegativeNumber(temp)) {
                totalSum += std::stoi(temp);
            } else {
                arrayOfWords[indexCounterForWords] = temp;
                indexCounterForWords++;
            }
            temp.clear();
        }

        i++;
    }

    if (isNumber(temp)) {
        totalSum += std::stoi(temp);
    } else if (isNegativeNumber(temp)) {
        totalSum += std::stoi(temp);
    } else {
        arrayOfWords[indexCounterForWords] = temp;
        indexCounterForWords++;
    }

    std::cout << totalSum << " " << std::endl;
    // std::cout << arrayOfWords << " ";

    for (int i = 0; i < (sizeof(arrayOfWords) / sizeof(arrayOfWords[0])); i++) {
        std::cout << arrayOfWords[i] << " ";
    }
}