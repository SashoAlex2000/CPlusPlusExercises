#include <iostream>
#include <cmath>


double calculateDistanceToCenter(int x, int y) {

    double result = std::sqrt((x * x) + (y*y));
    return result;

}


int main () {

    int x1; std::cin >> x1;
    int y1; std::cin >> y1;
    int x2; std::cin >> x2;
    int y2; std::cin >> y2;

    double firstDistance = calculateDistanceToCenter(x1, y1);
    double secondDistance = calculateDistanceToCenter(x2, y2);

    bool diff = firstDistance > secondDistance;

    int xToPrint = diff ? x2 : x1;
    int yToPrint = diff ? y2 : y1;

    std::cout << "(" << xToPrint << ", " << yToPrint << ")";

}

