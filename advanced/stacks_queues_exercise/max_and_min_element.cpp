#include <iostream>
#include <limits.h>
#include <stack>
#include <string>

int get_max_or_min(std::stack<int> someStack, std::string typeOfOperation) {

    int anchor = typeOfOperation == "max" ? INT_MIN : INT_MAX;

    while (someStack.size()) {
        int curr = someStack.top();
        someStack.pop();
        if (typeOfOperation == "max") {
            if (curr > anchor) {
                anchor = curr;
            }
        } else if (typeOfOperation == "min") {
            if (curr < anchor) {
                anchor = curr;
            }
        }
    }

    return anchor;
}

int main() {

    std::stack<int> stackOfNumbers;

    int numberOfCommands;
    std::cin >> numberOfCommands;

    while (numberOfCommands--) {

        int command, currentNum;
        std::cin >> command;

        switch (command) {
        case 1:
            std::cin >> currentNum;
            stackOfNumbers.push(currentNum);
            break;
        case 2:
            if (stackOfNumbers.size()) {
                stackOfNumbers.pop();
                break;
            }

        case 3:
            if (stackOfNumbers.size()) {
                int max = get_max_or_min(stackOfNumbers, "max");
                std::cout << max << std::endl;
            }
            break;

        case 4:
            if (stackOfNumbers.size()) {
                int min = get_max_or_min(stackOfNumbers, "min");
                std::cout << min << std::endl;
            }
            break;
            // default:
            //     std::cout << "There has been some mistake" << std::endl;
            //     break;
        }
    }

    while (stackOfNumbers.size()) {

        int curr = stackOfNumbers.top();

        std::string separator = stackOfNumbers.size() == 1 ? "" : ", ";

        stackOfNumbers.pop();

        std::cout << curr << separator;
    }

    std::cout << std::endl;
    return 0;
}
