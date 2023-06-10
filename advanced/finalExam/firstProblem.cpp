#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

bool comparePairs(const std::pair<std::string, double> &pair1, const std::pair<std::string, double> &pair2) {
    return pair1.second > pair2.second;
}

int main() {

    int numberOfLines;
    std::cin >> numberOfLines;

    std::vector<std::pair<std::string, double>> vectorOfProducts;
    double totalSum = 0;

    for (int i = 0; i < numberOfLines; i++) {

        std::string product;
        double price;
        double quantity;

        std::cin >> product >> price >> quantity;

        // std::cout << product << '-' << price << '-' << quantity << std::endl;

        std::pair<std::string, double> currentPair;
        currentPair.first = product;
        currentPair.second = price * quantity;
        vectorOfProducts.push_back(currentPair);

        totalSum += price * quantity;
    }

    // for (const auto &pair : vectorOfProducts) {
    //     std::cout << pair.first << ": " << pair.second << std::endl;
    // }

    std::sort(vectorOfProducts.begin(), vectorOfProducts.end(), comparePairs);

    // std::cout << "<------------->" << std::endl;

    std::cout << "The total sum is: " << totalSum << " lv." << std::endl;

    for (const auto &pair : vectorOfProducts) {
        std::cout << pair.first << ' ' << pair.second << std::endl;
    }


    return 0;
}
