#include <algorithm>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <set>


int main() {

    std::string input;
    std::getline(std::cin, input);

    std::istringstream streamOfNumbers(input);
    std::string temp;

    std::set<int> setOfNums;

    while (streamOfNumbers >> temp) {
        int currentNum = std::stoi(temp);

        setOfNums.insert(currentNum);
    }

    bool isFirst = true;

    for (auto number : setOfNums) {

        std::string separator = isFirst ? "" : " <= ";
        std::cout << separator << number;

        if (isFirst) {
            isFirst = false;
        }

    }

    return 0;
}