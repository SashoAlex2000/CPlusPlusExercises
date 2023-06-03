#include <iostream>
#include <string>
#include <stack>
#include <limits.h>


int main () {

    int totalNums, numbersForPopping, searchedNumber;

    std::cin >> totalNums >> numbersForPopping >> searchedNumber;

    std::stack<int> stackOfNumbers;

    for (int i = 0; i < totalNums; i++) {
        int current;
        std::cin >> current;
        stackOfNumbers.push(current);
    }

    for (int k = 0; k < numbersForPopping; k++) {
        stackOfNumbers.pop();
    }

    if (stackOfNumbers.size() == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int min = INT_MAX;
    
    while (stackOfNumbers.size()) {

        int currentNum = stackOfNumbers.top();
        stackOfNumbers.pop();

        if (currentNum == searchedNumber) {
            std::cout << "true" << std::endl;
            return 0;
        }

        if (currentNum < min) {
            min = currentNum;
        }

    }

    std::cout << min << std::endl;

    return 0;

}


