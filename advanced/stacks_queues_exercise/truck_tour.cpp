#include <iostream>
#include <queue>
#include <sstream>
#include <string>

bool canMakeTrip(std::queue<int> petrolQueue, std::queue<int> distanceQueue) {

    int totalPetrol = 0;

    while (distanceQueue.size()) {

        totalPetrol += petrolQueue.front();
        petrolQueue.pop();
        int currentDistance = distanceQueue.front();

        if (totalPetrol < currentDistance) {
            return false;
        }

        totalPetrol -= currentDistance;
        distanceQueue.pop();
    }

    return true;
}

int main() {

    int numberOfPumps;
    std::cin >> numberOfPumps;
    std::cin.ignore();

    std::queue<int> petrolQueue;
    std::queue<int> distanceQueue;

    for (int i = 0; i < numberOfPumps; i++) {

        // std::string curr;
        // std::getline(std::cin, curr);
        // std::cout << curr << std::endl;

        // std::istringstream streamCurr(curr);
        // std::string buffer;

        // while (streamCurr >> buffer) {
        //     std::cout << buffer <<std::endl;
        // }

        int buffer;
        std::cin >> buffer;
        petrolQueue.push(buffer);

        std::cin >> buffer;
        distanceQueue.push(buffer);
    }

    for (int i = 0; i < numberOfPumps; i++) {



        if (canMakeTrip(petrolQueue, distanceQueue)) {
            std::cout << i << std::endl;
            break;
        }

        int currPetrol = petrolQueue.front();
        petrolQueue.pop();
        petrolQueue.push(currPetrol);

        int currDistance = distanceQueue.front();
        distanceQueue.pop();
        distanceQueue.push(currDistance);
    }

    return 0;
}
