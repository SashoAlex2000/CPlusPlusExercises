#include <iostream>
#include <queue>
#include <string>

std::string readInput() {
    std::string input;
    getline(std::cin, input);
    return input;
}

std::queue<std::string> readEvents () {

    std::queue<std::string> receivedEvents;

    std::string input;
    const std::string endCommand = "end";

    while (true) {

        input = readInput();

        if (input == endCommand) {
            break;
        }

        receivedEvents.push(input);

    }

    return receivedEvents;

}


void printAllEvents (std::queue<std::string> &events) {

    while (!events.empty()) {
        std::cout << events.front() << " - ";
        events.pop();
    }

    std::cout << std::endl;

}

int main () {

    std::queue<std::string> events = readEvents();
    printAllEvents(events);

}


