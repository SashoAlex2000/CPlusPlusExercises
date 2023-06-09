#include <iostream>
#include <sstream>
#include <string>

int main () {

    std::string metaString;
    std::getline(std::cin, metaString);

    std::istringstream initialData(metaString);


    int rows;
    initialData >> rows;
    int matrix[rows][rows];


    for (int i = 0; i < rows; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);

        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < rows; k++) {
            streamOfNums >> matrix[i][k];
        }

    }

    int diagonalSum = 0;

    for (int r = 0; r < rows; r++) {
        diagonalSum+= matrix[r][r];
    }

    std::cout << diagonalSum << std::endl;

}

