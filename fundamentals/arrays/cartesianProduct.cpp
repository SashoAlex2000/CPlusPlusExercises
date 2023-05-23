#include <algorithm>
#include <iostream>
#include <limits>
#include <string>

int main () {

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

    for (int k = 0; k < n; k++) {
        for (int l = 0; l < n; l++) {
            std::cout << arrayOfNumbers[k] * arrayOfNumbers[l] << " ";
        }
    }


}

