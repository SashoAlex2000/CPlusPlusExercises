
#include <iostream>

bool isNumber(std::string s) {
    for (int i = 0; i < s.length(); i++) {
        if (std::isdigit(s.at(i)) == 0)
            return false;
    }
    return true;
}

int main() {

    std::cout << isNumber("1") << std::endl;
    std::cout << isNumber("-1") << std::endl;
}
