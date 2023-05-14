#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cin >> name;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    int currGrade = 1;
    bool hasFailed = false;
    double sumOfMarks = 0;

    while (currGrade < 13) {

        double currMark;
        std::cin >> currMark;

        if (currMark < 4) {
            if (!hasFailed) {
                hasFailed = true;
            } else {
                std::cout << name << " has been excluded at " << currGrade << " grade";
                break;
            }
        }

        sumOfMarks += currMark;
        currGrade++;
    }

    if (currGrade == 13) {
        double average = sumOfMarks / 12;
        std::cout << name << " graduated. Average grade: " << average;
    }
}
