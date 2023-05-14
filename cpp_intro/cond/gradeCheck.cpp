#include <iostream>

int main () {

    double grade;
    std::cin >> grade;

    std::string output;

    if (grade < 2 || grade > 6) {
        output = "Error!";
    } else if (grade >= 5.50) {
        output = "Excellent!";
    } else {
        output = "Not Excellent :(";
    }

    std::cout << output << std::endl;

}
