#include <iostream>
#include <sstream>
#include <string>

int main() {

    int rows;
    int cols;

    std::string metaString;
    std::getline(std::cin, metaString);

    std::istringstream initialData(metaString);

    initialData >> rows;

    cols = rows;

    int matrix[rows][cols];

    int sumOfPrimes = 0;

    for (int i = 0; i < rows; i++) {

        // std::string currentRow;
        // std::getline(std::cin, currentRow);
        // std::istringstream streamOfNums(currentRow);

        for (int k = 0; k < cols; k++) {
            int num;
            std::cin >> num;
            matrix[i][k] = num;
        }
    }

    if (cols % 2 != 0) {

        int middleCol = cols / 2;
        // middleCol++;
        // std::cout << middleCol << std::endl;

        int middleRow = rows / 2;
        // middleRow++;
        // std::cout << middleRow << std::endl;

        int counter = 0;

        for (int r = middleRow + 1; r < rows; r++) {
            // std::cout << "row" << r << std::endl;
            for (int c = middleCol - counter; c <= middleCol + counter; c++) {

                int currentNum = matrix[r][c];

                if (currentNum == 1 || currentNum == 2) {
                    sumOfPrimes += currentNum;
                } else if (currentNum > 2) {

                    bool isPrime = true;

                    for (int n = 2; n < currentNum; n++) {
                        if (currentNum % 2 == 0) {
                            isPrime = false;
                        }
                    }

                    if (isPrime) {
                        sumOfPrimes += currentNum;
                    }
                }

                // std::cout << matrix[r][c] << std::endl;
            }
            counter++;
        }

    } else {

        int middleCol = cols / 2;
        int middleRow = rows / 2;
        int counter = 1;

        for (int r = rows - 1; r > middleRow; r--) {
            // std::cout << "row " << r << std::endl;
            for (int c = 0 + counter; c < cols - counter; c++) {

                int currentNum = matrix[r][c];

                if (currentNum == 1 || currentNum == 2) {
                    sumOfPrimes += currentNum;
                } else if (currentNum > 2) {

                    bool isPrime = true;

                    for (int n = 2; n < currentNum; n++) {
                        if (currentNum % 2 == 0) {
                            isPrime = false;
                        }
                    }

                    if (isPrime) {
                        sumOfPrimes += currentNum;
                    }
                }

                // std::cout << "col " << currentNum << std::endl;
                // std::cout << "sum " << sumOfPrimes << std::endl;
                
            }
            counter++;
        }
    }

    std::cout << sumOfPrimes << std::endl;

    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < cols; c++) {
    //         std::cout << matrix[r][c] << ' ';
    //     }
    //     std::cout << std::endl;
    // }

    return 0;
}
