#include <iostream>
#include <string>
#include <limits>

int main() {

    // initialize and get the array length from console
    int lengthOfArray;
    std::cin >> lengthOfArray;

    // initialize array
    int arrayOfNumbers [lengthOfArray];

    // clear the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // intialize the char array, which will hold inputed string to be converted
    char numbersAsStringTakenFromConsole[100];

    // get the line from console
    std::cin.getline(numbersAsStringTakenFromConsole, 100);
    
    // initialize separator
    char separator = ' ';

    // counter 
    int i = 0;

    // counter for keeping up with which place to add the number
    int indexToAddFromSplitStringToArray = 0;

    // control
    std::cout << numbersAsStringTakenFromConsole << std::endl;

    // temporary string to hold values, which are to be transfered to
    // the array when empty space is hit
    std::string temp;

    while (numbersAsStringTakenFromConsole[i] != '\0') {
        if (numbersAsStringTakenFromConsole[i] != separator) {
            
            temp += numbersAsStringTakenFromConsole[i];
        } else {
            std::cout << temp << std::endl;
            std::cout << std::stoi(temp) << std::endl;
            arrayOfNumbers[indexToAddFromSplitStringToArray] = std::stoi(temp);
            indexToAddFromSplitStringToArray++;
            temp.clear();
        }
        i++;
    }

    // should not increment it again
    arrayOfNumbers[indexToAddFromSplitStringToArray] = std::stoi(temp);

    for (int k = 0; k < (sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0])); k++) {
        std::cout << "from final loop" << std::endl;
        std::cout << k << std::endl;
        std::cout << arrayOfNumbers[k] << std::endl;
    }



}
