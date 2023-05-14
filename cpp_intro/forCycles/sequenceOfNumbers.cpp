#include <iostream>
#include <climits>

int main () {

    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {

        int curr;
        std::cin >> curr;

        if (curr > maxNumber) {
            maxNumber = curr;
        }

        if (curr < minNumber) {
            minNumber = curr;
        }

    }

    std::cout << "MAX: " << maxNumber << std::endl;
    std::cout << "MIN: " << minNumber << std::endl;

}
