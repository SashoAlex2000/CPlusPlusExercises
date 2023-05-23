#include <algorithm>
#include <iostream>
#include <limits>
#include <string>

int main() {

    int n;
    std::cin >> n;
    int arrayOfNumbers[n];

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char numbersFromConsole[100];
    std::cin.getline(numbersFromConsole, 100);

    char separator = ' ';
    int i = 0;
    int indexCounterForArrayInsertion = 0;
    std::string temp = "";

    while (numbersFromConsole[i] != '\0') {

        if (numbersFromConsole[i] != separator) {
            temp += numbersFromConsole[i];
        } else {
            arrayOfNumbers[indexCounterForArrayInsertion] = std::stoi(temp);
            indexCounterForArrayInsertion++;
            temp.clear();
        }

        i++;
    }

    arrayOfNumbers[indexCounterForArrayInsertion] = std::stoi(temp);

    int magicIndex = 0;
    int maxStreak = 1;
    int lastNum = arrayOfNumbers[0];
    int counter = 1;

    for (int k = 1; k < n; k++) {
        int currentNum = arrayOfNumbers[k];

        if (currentNum == lastNum) {
            counter++;
        } else {
            counter = 1;
        }

        if (counter >= maxStreak) {
            magicIndex = k;
            maxStreak = counter;
        }

        lastNum = arrayOfNumbers[k];

    }

    for (int l = magicIndex; l > magicIndex - maxStreak; l--) {
        std::cout << arrayOfNumbers[l] << " "; 
    }

}

