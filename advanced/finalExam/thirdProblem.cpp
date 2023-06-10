#include <cctype>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {

    int numberOfLines;
    std::cin >> numberOfLines;

    std::map<std::string, double> mapOfCities;

    while (true) {

        std::string city;
        double price;
        double quantity;

        std::cin >> city >> price >> quantity;

        auto iter = mapOfCities.find(city);

        if (iter != mapOfCities.end()) {
            double original = iter->second;
            double newPrice = original + (price * quantity);
            iter->second = newPrice;
        } else {
            mapOfCities[city] = price * quantity;
        }

        int numberOfKeys = mapOfCities.size();

        if (numberOfKeys >= numberOfLines) {
            break;
        }

 
    }

    for (const auto& pair : mapOfCities) {
        std::cout << pair.first << ' ' << pair.second << std::endl;
    }

    return 0;
}
