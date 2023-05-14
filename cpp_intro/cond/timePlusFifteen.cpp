#include <iostream>

int main () {
    
    int hours, minutes;
    std::cin >> hours >> minutes;

    int total = hours * 60 + minutes + 15;

    int newHours = total / 60;
    int newMinutes = total % 60;

    if (newHours == 24) {
        newHours = 0;
    }

    std::string minuteSeparator;

    if (newMinutes < 10) {
        minuteSeparator = ":0";
    } else {
        minuteSeparator = ":";
    }

    std::cout << newHours << minuteSeparator << newMinutes;

}

