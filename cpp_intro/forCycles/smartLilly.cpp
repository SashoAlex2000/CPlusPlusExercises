#include <iostream>

int main() {

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    int age, priceOfToy;
    std::cin >> age;
    double washingMachinePrice;
    std::cin >> washingMachinePrice;
    std::cin >> priceOfToy;

    int money = 0;
    int toysReceived = 0;
    int receivedMoneyCounter = 10;

    for (int i = 1; i <= age; i++) {

        if (i % 2 != 0) {
            toysReceived++;
        } else {
            money += receivedMoneyCounter;
            money--;
            receivedMoneyCounter += 10;
        }
    }

    money += toysReceived * priceOfToy;
    double diff = money - washingMachinePrice;
    std::cout << diff << std::endl;

    if (diff >= 0) {
        std::cout << "Yes! " << diff << std::endl;
    } else {
        // didn't set the precision with abs() ?
        std::cout << "No! " << diff*-1 << std::endl;
    }
}
