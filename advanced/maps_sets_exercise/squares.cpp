#include <algorithm>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>


bool checkIfPerfectSquare (int someNum) {

    if (someNum < 0) {
        return false;
    }

    int numberSquared = std::sqrt(someNum);

    return (numberSquared * numberSquared == someNum);

}


int main() {

    std::string input;
    std::getline(std::cin, input);


    std::istringstream streamOfNumbers(input);
    std::string temp;

    std::set<int, std::greater<int>> setOfNums;

    while (streamOfNumbers >> temp) {
        int currentNum = std::stoi(temp);

        if (checkIfPerfectSquare(currentNum)) {
            setOfNums.insert(currentNum);
        }
        
    }

    for (auto number : setOfNums) {
        std::cout << number << ' ';
    }

    return 0;
}