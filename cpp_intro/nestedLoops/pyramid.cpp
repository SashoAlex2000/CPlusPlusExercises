#include <iostream>

int main () {

    int n;
    std::cin >> n;

    int i = 1;
    int numsPerRowCounter = 1;

    while (i <= n) {

        for (int inner = 0; inner < numsPerRowCounter; inner++) {
            std::cout << i << " ";
            i++;
            if (i > n) {
                break;
            }
        }
        std::cout << "\n";
        numsPerRowCounter++;

    }
    
}
