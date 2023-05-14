#include <iostream>
#include <string>

int main () {

    int floorNumber, roomsPerFloor;

    std::cin >> floorNumber;
    std::cin >> roomsPerFloor;

    for (int i = floorNumber; i > 0; i--) {
        std::string prefix = ";";

        if (i == floorNumber) {
            prefix = "L";
        } else {
            if (i % 2 == 0) {
                prefix = "O";
            } else {
                prefix = "A";
            }
        }

        for (int k = 0; k < roomsPerFloor; k++) {
            std::cout << prefix << i << k << " ";
        }
        std::cout << "\n";

    }

}

