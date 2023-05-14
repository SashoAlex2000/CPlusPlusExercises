#include <iostream>
#include <string>

int main() {

    double money = 0;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    while (true) {

        std::string curr;
        std::cin >> curr;

        if (curr == "NoMoreMoney") {
            break;
        }

        double currMoney = std::stof(curr);

        if (currMoney < 0) {
            std::cout << "Invalid operation!" << std::endl;
            break;
        }

        money += currMoney;
        std::cout << "Increase: " << currMoney << std::endl;
    }

    std::cout << "Total: " << money << std::endl;
}
