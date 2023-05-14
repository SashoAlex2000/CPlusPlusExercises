#include <iostream>

int main () {

    int startNum, endNum, magicNum;
    std::cin >> startNum >> endNum >> magicNum;
    bool magicNumFound = false;
    int totalCombinaions = 0;

    for (int i = startNum; i <= endNum; i++) {
        for (int k = startNum; k <= endNum; k++) {
            totalCombinaions++;
            if (i + k == magicNum) {
                std::cout << "Combination N: " << totalCombinaions << std::endl;
                std::cout << "(" << i << "+" << k << "=" << magicNum << ")" << std::endl;
                magicNumFound = true;
                break;
            }
        }

        if (magicNumFound) {
            break;
        }

    }

    if (!magicNumFound) {
        std::cout << totalCombinaions << " combinations - neither equals " << magicNum << std::endl;
    }

}

