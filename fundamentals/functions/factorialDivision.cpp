#include <cmath>
#include <iomanip>
#include <iostream>

double calculateFacotiel(int num) {

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    double result = 1;
    for (int i = num; i > 1; i--) {
        result *= i;
    }

    return result;
}

int main() {

    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    double result = calculateFacotiel(a) / calculateFacotiel(b);
    result = std::ceil(result * 100.0) / 100.0;
    std::cout << std::setprecision(2) << result << std::endl;
}
