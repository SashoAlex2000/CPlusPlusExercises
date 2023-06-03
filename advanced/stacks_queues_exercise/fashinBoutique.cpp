#include <iostream>
#include <limits.h>
#include <stack>
#include <string>
#include <sstream>


int main() {

    std::string clothes;
    // std::getline(std::cin, std::stoi(amountOfFood));
    // std::cin >> clothes;
    // std::cin.ignore();
    std::getline(std::cin, clothes);

    int rackCapacity;
    std::cin >> rackCapacity;
    
    std::stack<int> stackOfClothes;
    int currentCloth;
    std::istringstream streamOfClohtes(clothes);
    

    while (streamOfClohtes >> currentCloth) {
        stackOfClothes.push(currentCloth);
    }

    int racksUsed = 1;
    int currentRackCapacity = rackCapacity;


    while (stackOfClothes.size()) {
        
        int curr = stackOfClothes.top();
        stackOfClothes.pop();

        if (curr <= currentRackCapacity) {
            currentRackCapacity -= curr;
        } else {
            racksUsed++;
            currentRackCapacity = rackCapacity - curr;
        }

    }

    std::cout << racksUsed << std::endl;

    return 0;
}
