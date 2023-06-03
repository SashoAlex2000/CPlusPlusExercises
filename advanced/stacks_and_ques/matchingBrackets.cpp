#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>

int main() {

    std::stack<int> stackOfBracketIndeces;

    std::string input;
    std::getline(std::cin, input);


    for (int i = 0; i < input .length(); i++) {
        // std::cout << input[i] << std::endl;

        if (input[i] == '(') {
            stackOfBracketIndeces.push(i);
        }

        if (input[i] == ')') {
            if (stackOfBracketIndeces.empty()) {
                std::cout << "ERROR" << std::endl;
            } else {
                int currentOpeningIndex = stackOfBracketIndeces.top();
                stackOfBracketIndeces.pop();

                std::cout << input.substr(currentOpeningIndex, i - currentOpeningIndex + 1) << std::endl;

            }
        }

    }

    return 0;
}