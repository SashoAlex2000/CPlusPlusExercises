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
    char matrix[rows][cols];

    for (int i = 0; i < rows; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);
        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < cols; k++) {
            streamOfNums >> matrix[i][k];
        }
    }

    int foundEqualSquares = 0;

    for (int r = 0; r <= rows-2; r++) {
        for (int c = 0; c <= cols - 2; c++) {
            char first = matrix[r][c];
            char second = matrix[r][c+1];
            char third = matrix[r+1][c];
            char fourth = matrix[r+1][c+1];

            if (first == second && first == third && first == fourth) {
                foundEqualSquares++;
            }

        }
    }

    std::cout << foundEqualSquares << std::endl;

    return 0;
}


// 3 4
// A B B D
// E B B B
// I J B B