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

    double total = 0;

    while (numbersFromConsole[i] != '\0') {

        if (numbersFromConsole[i] != separator) {
            temp += numbersFromConsole[i];
        } else {
            arrayOfNumbers[indexCounterForArrayInsertion] = std::stoi(temp);
            indexCounterForArrayInsertion++;
            total += std::stoi(temp);
            temp.clear();
        }

        i++;
    }

    arrayOfNumbers[indexCounterForArrayInsertion] = std::stoi(temp);

    double average = total / n;

    for (int k = 0; k < n; k++) {
        int currentNum = arrayOfNumbers[k];
        if (currentNum >= average) {
            std::cout << currentNum << " ";
        }
    }

}
