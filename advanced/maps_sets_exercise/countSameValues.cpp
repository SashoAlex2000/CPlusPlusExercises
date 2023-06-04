#include <iostream>
#include <limits.h>
#include <map>
#include <string>
#include <sstream>
#include <unordered_map>


int main() {

    std::map<double, int> mapOfNumbers;

    std::string input;
    std::getline(std::cin, input);
    std::istringstream streamInput(input);
    std::string temp;

    while (streamInput >> temp) {
        
        double tempTransformed = std::stod(temp);
        auto currResult = mapOfNumbers.find(tempTransformed);

        if (currResult == mapOfNumbers.end()) {
            mapOfNumbers.insert({tempTransformed, 1});
        } else {
            mapOfNumbers[currResult->first]++;
        }

    }

    for (auto itr = mapOfNumbers.begin(); itr != mapOfNumbers.end(); ++itr) { 
        std::cout << itr->first << " - " << itr->second << " times" << std::endl;
    } 


    return 0;
}
