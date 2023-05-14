#include <iostream>
#include <climits>

int main () {

    int n;
    std::cin >> n;

    int maxNumber = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        int curr;
        std::cin >> curr;

        if (curr > maxNumber) {
            maxNumber = curr;
        }

        sum += curr;

    }

    sum = sum - maxNumber;
    int diff = abs(maxNumber - sum);

    if (diff == 0) {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = "<< sum << std::endl;
    } else {
        std::cout << "No" << std::endl;
        std::cout << "Diff = "<< diff << std::endl;
    }

}
