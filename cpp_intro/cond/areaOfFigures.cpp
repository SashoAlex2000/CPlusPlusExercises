#include <iostream>

int main () {
    
    std::string typeOffigure;
    std::cin >> typeOffigure;

    double area;

    if (typeOffigure == "square") {
        double a;
        std::cin >> a;
        area = a * a;
    } else if (typeOffigure == "rectangle") {
        double a, b;
        std::cin >> a, b;
        area = a * b;
    }else if (typeOffigure == "circle") {
        double r;
        std::cin >> r;
        double PI = 3.14159265;
        area = r * r * PI;
    } else if (typeOffigure == "triangle") {
        double a, h;
        std::cin >> a, h;
        area = a * h / 2;
    } 

    std::cout.setf(std::ios::fixed);
    std::cout.precision(3);
    std::cout << area << std::endl;

}

