#include <cctype>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

int main() {

    std::map<std::string, std::pair<double, double>> coords;

    while (true) {

        std::string buffer;
        std::getline(std::cin, buffer);

        if (buffer == ".") {
            break;
        }

        std::istringstream streamOfCoords(buffer);

        std::string city;
        std::getline(streamOfCoords, city, ',');

        std::pair<double, double> tempPair;

        std::string doubleString;
        std::getline(streamOfCoords, doubleString, ',');

        tempPair.first = std::stod(doubleString);

        std::getline(streamOfCoords, doubleString);
        tempPair.second = std::stod(doubleString);

        coords[city] = tempPair;
    }

    while (true) {

        std::string buffer;
        std::getline(std::cin, buffer);

        if (buffer == ".") {
            break;
        }

        if (std::isdigit(buffer[0])) {
            // TODO
        } else {

            auto it = coords.find(buffer);

            if (it != coords.end()) {
                std::cout << it->first << ',' << it->second.first << ',' << it->second.second << std::endl;
            }

        }
    }

    // for (auto pair : coords) {
    //     std::cout << pair.first << "---" << pair.second.first << " - " << pair.second.second << std::endl;
    // }

    return 0;
}
