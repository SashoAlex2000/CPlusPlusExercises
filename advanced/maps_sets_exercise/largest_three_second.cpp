#include <algorithm>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {

    std::string input;
    std::getline(std::cin, input);


    std::istringstream streamOfNumbers(input);
    std::string temp;

    std::set<int, std::greater<int>> setOfNums;

    while (streamOfNumbers >> temp) {
        int currentNum = std::stoi(temp);

        setOfNums.insert(currentNum);
    }

    int counter = 3;
    
    // std::set<int>::iterator it;
    // for (it = setOfNums.begin(); it != setOfNums.end(); ++it) {
    //     int f = *it;
    //     std::cout << f << " ";
    //     counter--;
    //     if (!counter) {
    //         break;
    //     }
    // }

    for (auto item : setOfNums) {
        std::cout << item << ' ';
        counter--;
        if (!counter) {
            break;
        }
    }

    std::cout << std::endl;

    return 0;
}