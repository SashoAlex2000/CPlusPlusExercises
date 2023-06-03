#include <iostream>
#include <queue>
#include <stack>
#include <string>

std::string readInput() {
    std::string input;
    getline(std::cin, input);
    return input;
}

void executeAddUrl(const std::string &newUrl,
                   std::stack<std::string> &urlHistory,
                   std::stack<std::string> &forwardHistory) {

    urlHistory.push(newUrl);

    // if (newUrl != forwardHistory.top()) {
    //     forwardHistory = std::stack<std::string>();
    // }

    forwardHistory = std::stack<std::string>();
    std::cout << "Added " << newUrl << std::endl;
}

void executeBackUrl(std::stack<std::string> &urlHistory,
                    std::stack<std::string> &forwardHistory) {

    if (urlHistory.empty()) {
        std::cout << "History is empty ;)" << std::endl;
        return;
    }

    std::cout << "Removing " << urlHistory.top() << std::endl;
    forwardHistory.push(urlHistory.top());
    urlHistory.pop();

    if (urlHistory.empty()) {
        std::cout << "Emptied the history" << std::endl;
    } else {
        std::cout << "CurrentLast " << urlHistory.top() << std::endl;
        std::cout << "Current Forward  " << forwardHistory.top() << std::endl;
    }
}

void executeForwardUrl(std::stack<std::string> &urlHistory,
                       std::stack<std::string> &forwardHistory) {
                        
    if (forwardHistory.empty()) {
        std::cout << "No links to forward to!" << std::endl;
        return;
    }

    std::cout << "Going to " << forwardHistory.top() << std::endl;
    urlHistory.push(forwardHistory.top());
    forwardHistory.pop();

    if (forwardHistory.empty()) {
        std::cout << "No forward links" << std::endl;
    } else {
        std::cout << "CurrentLast " << urlHistory.top() << std::endl;
        std::cout << "CurrentForward " << forwardHistory.top() << std::endl;
    }
}

int main() {

    std::stack<std::string> urlHistory;
    std::stack<std::string> forwardHistory;
    std::string currUrl;

    const std::string endCommand = "end";
    const std::string backCommand = "/back";
    const std::string forwardCommand = "/forward";

    while (true) {

        currUrl = readInput();
        std::cout << currUrl << std::endl;

        if (currUrl == endCommand) {
            break;
        }

        if (currUrl == backCommand) {
            executeBackUrl(urlHistory, forwardHistory);
        } else if (currUrl == forwardCommand) {
            executeForwardUrl(urlHistory, forwardHistory);
        } else {
            executeAddUrl(currUrl, urlHistory, forwardHistory);
        }
    }

    return 0;
}
