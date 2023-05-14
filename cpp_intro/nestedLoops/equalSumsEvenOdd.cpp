#include <iostream>
#include <string>

int main () {

    int firstNum; std::cin >> firstNum;
    int secondNum; std::cin >> secondNum;

    for (int i = firstNum; i <= secondNum; i++) {

        std::string curr = std::to_string(i);
        
        int oddSum = 0;
        int evenSum = 0;

        for (int k = 0; k < curr.length(); k++) {
            char currentChar = curr[k];
            int currentNum = int(currentChar) - 48;
            if ((k + 1) % 2 == 0) {
                evenSum += currentNum;
            } else {
                oddSum += currentNum;
            }
        }

        if (oddSum == evenSum) {
            std::cout << curr << " ";
        }   

    }

}

