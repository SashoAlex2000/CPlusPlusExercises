#include <iostream>
#include <string>
#include "checkPrimeNum.h"

int main () {

    int primeSum = 0;
    int nonPrimeSum = 0;

    while (true) {

        std::string curr;
        std::cin >> curr;

        if (curr == "stop") {
            break;
        }

        int num = std::stoi(curr);

        if (num < 0) {
            std::cout << "Number is negative" << std::endl;
            continue;
        }

        if (checkIfPrime(num)) {
            primeSum += num;
        } else {
            nonPrimeSum += num;
        }

    }

    std::cout << "Sum of all prime numbers is: " << primeSum << "\n";
    std::cout << "Sum of all non prime numbers is: " << nonPrimeSum << "\n";

}

