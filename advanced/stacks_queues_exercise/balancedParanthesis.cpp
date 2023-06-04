#include <iostream>
#include <sstream>
#include <stack>
#include <string>

int main() {

    std::string input;
    std::getline(std::cin, input);

    std::stack<char> stackOfParhentesis;
    std::string toReturn = "YES";

    for (int i = 0; i < input.length(); i++) {
        char curr = input[i];
        // std::cout << curr << std::endl;

        if (curr == '(' || curr == '{' || curr == '[') {
            stackOfParhentesis.push(curr);
        } else {

            if (!stackOfParhentesis.size()) {
                toReturn = "NO";
                break;
            }

            if (curr == ')') {
                if (stackOfParhentesis.top() != '(') {
                    toReturn = "NO";
                }
            } else if (curr == ']') {
                if (stackOfParhentesis.top() != '[') {
                    toReturn = "NO";
                }
            } else if (curr == '}') {
                if (stackOfParhentesis.top() != '{') {
                    toReturn = "NO";
                }
            }

            if (toReturn == "NO") {
                break;
            }

            stackOfParhentesis.pop();
        }
    }

    if (stackOfParhentesis.size()) {
        toReturn = "NO";
    }

    std::cout << toReturn << std::endl;

    return 0;
}
