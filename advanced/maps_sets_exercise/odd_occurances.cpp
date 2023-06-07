#include <algorithm>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

char toLowerChar(char ch) {
    return std::tolower(ch);
}

int main() {

    std::string input;
    std::getline(std::cin, input);
    std::istringstream streamInput(input);

    std::list<std::pair<std::string, int>> listOfLanguages;

    std::string temp;

    while (streamInput >> temp) {

        std::transform(temp.begin(), temp.end(), temp.begin(), toLowerChar);

        // std::cout << temp << std::endl;

        bool wordFound = false;

        for (auto &lang : listOfLanguages) {
            if (lang.first == temp) {
                lang.second++;
                wordFound = true;
                // std::cout << lang.first << std::endl;
                // std::cout << lang.second << std::endl;
                break;
            }
        }

        if (!wordFound) {
            listOfLanguages.push_back(std::pair<std::string, int>(temp, 1));
        }
    }

    for (auto &lang : listOfLanguages) {

        if (lang.second % 2 != 0) {
            std::cout << lang.first << ", ";
        }
    }

    return 0;
}