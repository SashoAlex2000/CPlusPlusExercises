#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

    int rows = 10;
    int cols = 10;
    char matrix[rows][cols];

    for (int i = 0; i < rows; i++) {

        std::string currentRow;
        std::getline(std::cin, currentRow);
        std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < cols; k++) {
            streamOfNums >> matrix[i][k];
        }
    }

    int periodsOfTime;
    std::cin >> periodsOfTime;

    for (int i = 0; i < periodsOfTime; i++) {

        std::vector<std::pair<int,int>> coordToRemove;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {

                if (matrix[r][c] == '!') {
                    if (r - 1 >= 0) {
                        if (matrix[r - 1][c] != '#') {
                            coordToRemove.push_back(std::pair<int, int> (r-1, c));
                        }
                    }
                    if (c + 1 < cols) {
                        if (matrix[r][c + 1] != '#') {
                            coordToRemove.push_back(std::pair<int, int> (r, c+1));
                        }
                    }
                    if (c - 1 >= 0) {
                        if (matrix[r][c - 1] != '#') {
                            coordToRemove.push_back(std::pair<int, int> (r, c-1));
                        }
                    }
                    if (r + 1 < rows) {
                        if (matrix[r + 1][c] != '#') {
                            coordToRemove.push_back(std::pair<int, int> (r+1, c));
                        }
                    }
                }
            }
        }

        for (int v = 0; v < coordToRemove.size(); v++) {
            std::pair<int, int> currentPair = coordToRemove.at(v);
            matrix[currentPair.first][currentPair.second] = '!';
        }

    }

    for (auto &row : matrix) {

        std::string toPrint;

        for (char cell : row) {
            toPrint += cell;
        }
        
        std::cout << toPrint << std::endl;
    }

    return 0;
}
