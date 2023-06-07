#include <algorithm>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>




int main() {

    std::string input;
    std::cin >> input;

    std::vector<std::pair<std::string, int>> listOfResources;

    while (input != "stop") {

        int currentAmount;
        std::cin >> currentAmount;
        
        bool exists = false;

        for (int i = 0; i < listOfResources.size(); i++) {

            std::pair<std::string, int> currentPair = listOfResources.at(i);

            if (currentPair.first == input) {
                listOfResources.at(i).second += currentAmount;
                exists = true;
                break;
            }

        }

        if (!exists) {
            listOfResources.push_back(std::pair<std::string, int>(input, currentAmount));
        }

        std::cin >> input;
        

    }

    
    for (auto pair : listOfResources) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}