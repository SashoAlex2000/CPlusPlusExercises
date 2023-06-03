#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <sstream>

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

// 'const' just implies that there wont be modification on the passed in vector
// '&' just passes it as a reference, this way the function doesn't create a copy, 
// for better performance, especially with large vectors.
// both can be omitted
void printWordsInReverseOrder (const std::vector<std::string>& words) {
    std::stack<std::string> reversedWords;
    
    for (const std::string& word : words ) {
        reversedWords.push(word);
    }

    while (!reversedWords.empty()) {
        std::cout << reversedWords.top() << ' ';
        reversedWords.pop();
    }

    std::cout << std::endl;

}


int main () {

    const std::vector<std::string> words = readInput();
    printWordsInReverseOrder(words);

    return 0;

}

