#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

    std::vector<std::vector<int>> firstVectorMatrix;
    std::vector<std::vector<int>> secondVectorMatrix;

    int firstSize;
    std::cin >> firstSize;
    std::cin.ignore();

    for (int i = 0; i < firstSize; i++) {

        std::string curr;
        std::getline(std::cin, curr);
        std::istringstream streamOfNums(curr);
        int tempNum;
        std::vector<int> vectorRow;

        while (streamOfNums >> tempNum) {
            vectorRow.push_back(tempNum);
        }

        firstVectorMatrix.push_back(vectorRow);
    }
    
    int secondSize;
    std::cin >> secondSize;
    std::cin.ignore();

    for (int i = 0; i < secondSize; i++) {

        std::string curr;
        std::getline(std::cin, curr);
        std::istringstream streamOfNums(curr);

        int tempNum;
        std::vector<int> vectorRow;

        while (streamOfNums >> tempNum) {
            vectorRow.push_back(tempNum);
        }

        secondVectorMatrix.push_back(vectorRow);
    }

    bool areEqual = true;

    if (firstVectorMatrix.size() != secondVectorMatrix.size()) {
        areEqual = false;
    } else {
        for (int r = 0; r < firstVectorMatrix.size(); r++) {

            std::vector<int> currFirstVector = firstVectorMatrix[r];
            std::vector<int> currSecondVector = secondVectorMatrix[r];

            if (currFirstVector.size() != currSecondVector.size()) {
                areEqual = false;
                break;
            }

            for (int c = 0; c < currFirstVector.size(); c++) {
                if (currFirstVector[c] != currSecondVector[c]) {
                    areEqual = false;
                    break;
                }
            }
            
        }
    }

    std::string result = areEqual ? "equal" : "not equal";

    std::cout << result << std::endl;

    return 0;
}



