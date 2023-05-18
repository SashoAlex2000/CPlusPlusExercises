#include <iostream>
#include <string>


std::string determineSign (int num) {

    std::string toReturn;

    if (num > 0) {
        toReturn = "positive";
    } else if (num < 0) {
        toReturn = "negative";
    } else {
        toReturn = "zero";
    }

    return toReturn;

}

int main () {

    int num;
    std::cin >> num;

    std::string var = determineSign(num);

    std::cout << "The number " << num << " is " << var << ".";

    return 0;

}



