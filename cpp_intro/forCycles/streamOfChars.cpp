#include <iostream>
#include <string>

int main () {

    std::string word;
    std::getline(std::cin, word);

    for (int i = 0; i < word.length(); i++) {
        std::cout << word[i] << std::endl;
    }

}

