#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

std::vector<std::string> readInput() {

    std::vector<std::string> words;
    std::string input;
    getline(std::cin, input);
    std::istringstream istr(input);

    std::string word;

    while (istr >> word) {
        words.push_back(word);
    }

    return words;

}

void printWordsInReverseOrder (const std::vector<std::string>& words) {
    std::stack<std::string> reversedWords;
    
    for (const std::string& word : words ) {
        reversedWords.push(word);
    }

    while (!reversedWords.empty()) {
        std::string currentWord = reversedWords.top();
        std::reverse(currentWord.begin(), currentWord.end());

        std::cout << currentWord << ' ';
        reversedWords.pop();
    }

    std::cout << std::endl;

}


int main () {

    const std::vector<std::string> words = readInput();
    printWordsInReverseOrder(words);

    return 0;

}

