#include <iostream>
#include <string>

int main() {

    char arr[100];

    
    std::cin.getline(arr, 100);
    char separator = ' ';
    int i = 0;

    std::string testArr[4];
    int lastArrIndexAdded = 0;

    
    std::string s;
    while (arr[i] != '\0') {
        if (arr[i] != separator) {
            
            s += arr[i];
        } else {
            std::cout << s << std::endl;
            testArr[lastArrIndexAdded] = s;
            lastArrIndexAdded++;
            s.clear();
        }
        i++;
    }


    std::cout << s << std::endl;
    lastArrIndexAdded++;
    testArr[lastArrIndexAdded] = s;

    std::cout << testArr << std::endl;
    std::cout << sizeof(testArr) / sizeof(testArr[0]) << std::endl;

    std::cout << testArr[0] << std::endl;
    std::cout << testArr[1] << std::endl;
    std::cout << testArr[2] << std::endl;
    std::cout << testArr[3] << std::endl;

    for (int k = 0; k < (sizeof(testArr) / sizeof(testArr[0])); k++) {

        std::cout << "bazinga?" << std::endl;
        std::cout << testArr[k] << std::endl;
    }

    return 0;
}
