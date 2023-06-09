#include <iostream>
#include <sstream>
#include <string>

int main () {

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

    for (int c = 0; c < cols; c++) {
        int currentSum = 0;
        for (int r = 0; r < rows; r++) {
            currentSum += matrix[r][c];
        }
        std::cout << currentSum << std::endl;
    }

}

