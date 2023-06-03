#include <iostream>
#include <queue>
#include <string>

int main() {

    int n;
    std::cin >> n;

    std::string currInput;

    std::queue<std::string> queueOfCards;
    int passedCarrs = 0;

    while (true) {

        std::getline(std::cin, currInput);
        // std::cout << currInput << std::endl;

        if (currInput == "end") {
            break;
        }

        if (currInput == "green") {
            for (int i = 0; i < n; i++) {
                if (queueOfCards.empty()) {
                    break;
                }
                std::cout << queueOfCards.front() << " passed!" << std::endl;
                queueOfCards.pop();
                passedCarrs++;
            }
            continue;
        }
        if (currInput != "") {
            std::cout << "adding car: " << currInput << std::endl;
            queueOfCards.push(currInput);
        }
    }

    std::cout << passedCarrs << " cars passed the crossroads." << std::endl;

    return 0;
}
