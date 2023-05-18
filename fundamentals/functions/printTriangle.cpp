#include <iostream>
#include <string>

std::string printRow (int num) {

    std::string result = "";

    for (int i = 1; i <= num; i++) {
        result += std::to_string(i);
        result += " ";
    }

    return result;

}


int main () {

    int num;
    std::cin >> num;

    for (int i = 0; i <= num; i++) {
        std::string toPrint = printRow(i);
        std::cout << toPrint << std::endl;
    }

    for (int i = num - 1; i >= 1; i--) {
        std::string toPrint = printRow(i);
        std::cout << toPrint << std::endl;
    }

}

