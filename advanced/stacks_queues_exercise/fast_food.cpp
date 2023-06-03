#include <iostream>
#include <limits.h>
#include <queue>
#include <string>
#include <sstream>


int main() {

    int amountOfFood;
    // std::getline(std::cin, std::stoi(amountOfFood));
    std::cin >> amountOfFood;
    std::cin.ignore();

    std::string initialOrders;
    std::getline(std::cin, initialOrders);

    std::istringstream streamOfOrders(initialOrders);
    
    std::queue<int> queueOfOrders;
    int currentOrder;
    int max = INT_MIN;

    while (streamOfOrders >> currentOrder) {
        queueOfOrders.push(currentOrder);
    }    

    int iterations = queueOfOrders.size();

    for (int i = 0; i < iterations; i++) {
        int currentOrder = queueOfOrders.front();
        if (amountOfFood >= currentOrder) {
            queueOfOrders.pop();
            amountOfFood -= currentOrder;
            if (currentOrder > max) {
                max = currentOrder;
            }
        } else {
            queueOfOrders.pop();
            queueOfOrders.push(currentOrder);
        }

    }

    std::cout << max << std::endl;

    if (queueOfOrders.size()) {
        std::cout << "Orders left: ";
        while (queueOfOrders.size()) {
            std::cout << queueOfOrders.front() << " ";
            queueOfOrders.pop();
        }
        std::cout << std::endl;
    } else {
        std::cout << "Orders complete" << std::endl;
    }

    return 0;
}
