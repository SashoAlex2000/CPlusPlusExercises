#include <iostream>
#include <sstream>
#include <string>

int main () {

    int rows = 3;
    int cols = 3;
    int matrix[rows][cols];


    for (int i = 0; i < cols; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);

        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < cols; k++) {
            streamOfNums >> matrix[i][k];
        }

    }

    std::cout << std::endl;
    std::cout << "<--------------->" << std::endl;
    std::cout << std::endl;

    for (auto & row : matrix) {

        for (int cell : row) {
            std::cout << cell << ' ';
        }

        std::cout << std::endl;

    }

    std::cout << std::endl;
    std::cout << "<--------------->" << std::endl;
    std::cout << std::endl;

    for (int r = 0; r < rows; r++) {
        for (int c =0; c < cols; c++) {
            std::cout << matrix[r][c] << ' ';
        }
        std::cout << std::endl;
    }

}

