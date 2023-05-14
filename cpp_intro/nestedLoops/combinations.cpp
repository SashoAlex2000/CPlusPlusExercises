#include <iostream>
#include "checkPrimeNum.h"

// how many combinations of prime numbers equal the input number
int main() {

    int n;
    std::cin >> n;
    int primesPairsFound = 0;

    for (int i = 1; i < n; i++) {
        for (int k = 1; k < n; k++) {
            if (k + i == n) {
                if (checkIfPrime(i) == true && checkIfPrime(k) == true) {
                    std::cout << i << " + " << k << " equals " << n << std::endl;
                }
            }
        }
    }

    std::cout << primesPairsFound << std::endl;
}
