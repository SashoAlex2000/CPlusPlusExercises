#include <iostream>
#include <sstream>
#include <string>

int main() {

    std::string metaString;
    std::getline(std::cin, metaString);

    std::istringstream initialData(metaString);

    int rows;
    initialData >> rows;
    char matrix[rows][rows];

    for (int i = 0; i < rows; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);

        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < rows; k++) {
            char currentChar;
            streamOfNums >> currentChar;
            matrix[i][k] = currentChar;
        }
    }

    char searchedSymbol;
    std::cin >> searchedSymbol;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < rows; c++) {
            if (matrix[r][c] == searchedSymbol) {
                std::cout << '(' << r << ", " << c << ')' << std::endl;
                return 0;
            }
        }
    }

    std::cout << searchedSymbol << " does not occur in the matrix" << std::endl;

    return 0;

}
