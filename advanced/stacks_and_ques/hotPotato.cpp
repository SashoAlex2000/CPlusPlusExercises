#include <iostream>
#include <queue>
#include <sstream>
#include <string>

int main() {

    std::queue<std::string> queueOfPlayers;

    std::string input;
    std::getline(std::cin, input);

    std::cout << input << std::endl;
    int n;
    std::cin >> n;
    std::istringstream initialNamesStream(input);
    std::string tempName;

    while (initialNamesStream >> tempName) {
        queueOfPlayers.push(tempName);
    }

    while (queueOfPlayers.size() > 1) {

        for (int i = 0; i < n -1; ++i) {
            queueOfPlayers.push(queueOfPlayers.front());
            queueOfPlayers.pop();
        }

        std::cout << "ELiminated " << queueOfPlayers.front() << std::endl;
        queueOfPlayers.pop();
    }

    std::cout << "Last is: " << queueOfPlayers.front() << std::endl;

    return 0;
}
