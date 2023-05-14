#include <iostream>


int main () {

    int firstTime, secondTime, thirdtime;
    std::cin >> firstTime >> secondTime >> thirdtime;

    int total = firstTime + secondTime + thirdtime;

    int minutes = total / 60;
    int seconds = total % 60;

    std::string separator;

    if (seconds < 10) {
        separator = ":0";
    } else {
        separator = ":";
    }

    std::cout << minutes << separator << seconds << std::endl;

}
