#include <iostream>
#include <sstream>
#include <string>

int main() {

    std::string metaString;
    std::getline(std::cin, metaString);

    std::istringstream initialData(metaString);

    int rows;
    int cols;
    initialData >> rows >> cols;
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);
        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < cols; k++) {
            streamOfNums >> matrix[i][k];
        }
    }

    // std::cin.ignore();
    int searchedNum;
    std::cin >> searchedNum;

    bool isFound = false;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (matrix[r][c] == searchedNum) {
                std::cout << r << ' ' << c << std::endl;
                isFound = true;
            }
        }
    }

    if (!isFound) {
        std::cout << "not found" << std::endl;
    }

    return 0;
}
