#include <iostream>

int main()
{

    int inches;
    double CM_IN_INCHES = 2.54;

    std::cin >> inches;
    double result;
    result = inches * CM_IN_INCHES;

    std::cout << result << std::endl;

    return 0;
}