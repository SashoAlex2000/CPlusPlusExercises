#include <iostream>
#include <queue>
#include <string>


int main() {

    std::string input;
    std::queue<std::string> queueOfCustomers;

    while (true) {

        std::getline(std::cin, input);

        if (input == "End") {
            break;
        }

        if (input == "Paid") {
            while (!queueOfCustomers.empty()) {
                std::cout << queueOfCustomers.front() << std::endl;
                queueOfCustomers.pop();
            }
        }

        queueOfCustomers.push(input);

    }

    std::cout << queueOfCustomers.size() << " people remaining." << std::endl;

    return 0;
}
