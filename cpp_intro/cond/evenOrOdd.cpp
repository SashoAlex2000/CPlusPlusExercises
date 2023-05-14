#include <iostream>


int main () {

    int num;
    std::cin >> num;

    std::string result = (num % 2 == 0) ? "even" : "odd";

    std::cout << result << std::endl;

}
