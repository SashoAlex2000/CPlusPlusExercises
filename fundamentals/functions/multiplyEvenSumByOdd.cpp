#include <iostream>
#include <string>

int main () {

    std::string number;
    std::cin >> number;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < number.length(); i++) {
        int curr = number[i] - '0';
        if (curr % 2 == 0) {
            evenSum += curr;
        } else {
            oddSum += curr;
        }
    }

    int result = evenSum * oddSum;

    std::cout << result << std::endl;

}


