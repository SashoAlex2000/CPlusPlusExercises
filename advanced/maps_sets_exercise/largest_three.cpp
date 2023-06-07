#include <algorithm>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int getMinNum(const std::vector<int> &someVector) {
    if (someVector.empty()) {
        return -1;
    }

    int minIndex = 0;
    int minNumber = someVector[0];

    for (int i = 1; i < someVector.size(); i++) {
        if (someVector[i] < minNumber) {
            minNumber = someVector[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {

    std::string input;
    std::getline(std::cin, input);


    std::istringstream streamOfNumbers(input);
    std::string temp;

    std::vector<int> vectorOfNums;

    while (streamOfNumbers >> temp) {
        int currentNum = std::stoi(temp);

        if (vectorOfNums.size() < 3) {
            vectorOfNums.push_back(currentNum);
        } else {
            int currentMinNumIndex = getMinNum(vectorOfNums);
            int minNum = vectorOfNums.at(currentMinNumIndex);

            if (currentNum > minNum) {
                vectorOfNums.erase(vectorOfNums.begin() + currentMinNumIndex);
                vectorOfNums.push_back(currentNum);
            }
        }
    }

    std::set<int, std::greater<int>> setOfNums(vectorOfNums.begin(), vectorOfNums.end());

    std::set<int>::iterator it;
    for (it = setOfNums.begin(); it != setOfNums.end(); ++it) {
        int f = *it;
        std::cout << f << " ";
    }

    return 0;
}