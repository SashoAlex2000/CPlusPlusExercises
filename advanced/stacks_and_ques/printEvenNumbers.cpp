#include <iostream>
#include <string>
#include <queue>
#include <sstream>

int main () {

    std::string input;

    std::queue<int> queueOfNumbers;

    std::getline(std::cin, input);
    std::istringstream initialNumStream(input);
    int tempNum;

    while (initialNumStream >> tempNum) {
        // std::cout << tempNum << std::endl;
        if (tempNum % 2 == 0) {
            queueOfNumbers.push(tempNum);
        }

    }

    while (!queueOfNumbers.empty()) {

        std::string separator = queueOfNumbers.size() == 1 ? "" : ", ";

        std::cout << queueOfNumbers.front() << separator;
        queueOfNumbers.pop();
    }


    return 0;

}

