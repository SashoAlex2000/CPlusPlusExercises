#include <iostream>
#include <limits>
#include <string>
#include <algorithm>

int main() {

    int lengthOfArray1;
    std::cin >> lengthOfArray1;
    int arrayOfNumbers1[lengthOfArray1];

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char numbersFromConsole[100];
    char separator = ' ';
    int i = 0;
    int indexCounterForArrayInsertion = 0;
    std::string temp = "";

    std::cin.getline(numbersFromConsole, 100);

    std::cout << numbersFromConsole << std::endl;

    while (numbersFromConsole[i] != '\0') {

        if (numbersFromConsole[i] != separator) {
            temp += numbersFromConsole[i];
        } else {

            std::cout << temp << std::endl;
            arrayOfNumbers1[indexCounterForArrayInsertion] = std::stoi(temp);
            indexCounterForArrayInsertion++;
            temp.clear();
        }

        i++;
    }

    arrayOfNumbers1[indexCounterForArrayInsertion] = std::stoi(temp);

    i = 0;
    temp.clear();
    indexCounterForArrayInsertion = 0;

    int lengthOfArray2;
    std::cin >> lengthOfArray2;
    int arrayOfNumbers2[lengthOfArray2];

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char numbersFromConsole2[100];
    std::cin.getline(numbersFromConsole2, 100);
    std::cout << numbersFromConsole2 << std::endl;

    while (numbersFromConsole2[i] != '\0') {

        if (numbersFromConsole2[i] != separator) {
            temp += numbersFromConsole2[i];
        } else {

            std::cout << temp << std::endl;
            arrayOfNumbers2[indexCounterForArrayInsertion] = std::stoi(temp);
            indexCounterForArrayInsertion++;
            temp.clear();
        }

        i++;
    }

    arrayOfNumbers2[indexCounterForArrayInsertion] = std::stoi(temp);

    for (int k = 0; k < lengthOfArray1; k++) {
        std::cout << "array 1" << std::endl;
        std::cout << k << std::endl;
        std::cout << arrayOfNumbers1[k] << std::endl;
    }

    for (int k = 0; k < lengthOfArray2; k++) {
        std::cout << "array 2" << std::endl;
        std::cout << k << std::endl;
        std::cout << arrayOfNumbers2[k] << std::endl;
    }

    bool areEqual = true;

    if (lengthOfArray1 != lengthOfArray2) {
        areEqual = false;
    } else {
        for (int l = 0; l < lengthOfArray1; l++) {
            std::cout << "final" << std::endl;
            std::cout << l << std::endl;

            std::cout << arrayOfNumbers1[l] << std::endl;
            std::cout << arrayOfNumbers2[l] << std::endl;
            if (arrayOfNumbers1[l] != arrayOfNumbers2[l]) {
                areEqual = false;
                break;
            }
        }
    }

    std::string result = areEqual ? "equal" : "not equal";
    std::cout << result << std::endl;

}
