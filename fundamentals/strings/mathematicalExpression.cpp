
#include <iostream>
#include <string>

int main() {

    std::string str;
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, str);

    int openingBrackets = 0;
    int closingBrackets = 0;
    bool isCorrect = true;

    for (int i = 0; i < str.length(); i++) {
        char currentChar = str.at(i);

        if (currentChar == '(') {
            openingBrackets++;
        } else if (currentChar == ')') {
            closingBrackets++;
        }

        if (closingBrackets > openingBrackets) {
            isCorrect = false;
            break;
        }

    }

    if (openingBrackets != closingBrackets) {
        isCorrect = false;
    }

    std::string result = isCorrect ? "correct" : "incorrect";

    std::cout << result << std::endl;

}
