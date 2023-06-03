#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>

// from StackOverflow -> used in the transform function
char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

int main() {

    std::string inputLine;
    std::stack<int> stackOfNumbers;

    std::string initialLine;
    std::getline(std::cin, initialLine);
    std::istringstream initialStringStream(initialLine);
    int tempNum;

    while (initialStringStream >> tempNum) {
        stackOfNumbers.push(tempNum);
    }

    while (true) {

        std::getline(std::cin, inputLine);
        std::cout << inputLine << std::endl;

        if (inputLine == "end") {
            break;
        }

        std::istringstream stringStream(inputLine);
        std::string keyword;
        int num1;
        int num2;

        stringStream >> keyword >> num1 >> num2;

        std::transform(keyword.begin(), keyword.end(), keyword.begin(), asciitolower);

        if (keyword == "add") {
            stackOfNumbers.push(num1);
            stackOfNumbers.push(num2);
        } else if (keyword == "remove") {
            if (num1 > stackOfNumbers.size()) {
                continue;
            }

            for (int i = 0; i < num1; i++) {
                stackOfNumbers.pop();
            }
        }
    }

    int totalSum = 0;

    while (!stackOfNumbers.empty()) {
        totalSum += stackOfNumbers.top();
        stackOfNumbers.pop();
    }

    std::cout << "Sum: " << totalSum << std::endl;

    return 0;
}
