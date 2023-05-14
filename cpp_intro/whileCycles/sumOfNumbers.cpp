#include <iostream>


int main () {

    int magicNumber;
    std::cin >> magicNumber;

    int sum = 0;

    while (sum < magicNumber) {

        int curr;
        std::cin >> curr;
        sum += curr;

    } 

    std::cout << sum << std::endl;

}

