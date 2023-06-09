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

    int primaryDiagonalSum = 0;

    for (int r = 0; r < rows; r++) {    
        primaryDiagonalSum += matrix[r][r];
    }

    int secondaryDiagonalSum = 0;

    for (int r = 0; r < rows; r++) {
        secondaryDiagonalSum += matrix[r][rows-1-r];
    }

    int diff = primaryDiagonalSum - secondaryDiagonalSum;
    int multiplicator = diff < 0 ? -1 : 1;
    
    std::cout << diff * multiplicator << std::endl;

}

