#include <iostream>

int main () {

    int n;
    std::cin >> n;

    int totalSum = 0;

    for (int i = 0; i < n; i++) {

        int curr;
        std::cin >> curr;
        totalSum += curr;

    }

    std::cout << totalSum << std::endl;

}

