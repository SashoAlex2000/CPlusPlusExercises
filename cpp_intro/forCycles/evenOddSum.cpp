#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 1; i <= n; i++) {

        int curr;
        std::cin >> curr;

        if (i % 2 == 0) {
            evenSum += curr;
        } else {
            oddSum += curr;
        }
    }

    int diff = oddSum - evenSum;

    if (diff == 0) {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = " << oddSum << std::endl;
    } else {
        std::cout << "No" << std::endl;
        std::cout << "Diff = " << diff << std::endl;
    }
}
