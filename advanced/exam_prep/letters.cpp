#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>


int main () {


    std::string buffer;

    std::getline(std::cin, buffer);

    for (char & c : buffer) {

        if (!(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')) {
            c = ' ';
        }

    }

    std::set<std::string> setOfWords;

    std::string temp;
    std::istringstream streamOfWords(buffer);

    while (streamOfWords >> temp) {
        setOfWords.insert(temp);
    }

    while (true) {

        std::string curr;
        std::getline(std::cin, curr);

        char searchedChar = std::tolower(curr[0]);

        if (searchedChar == '.') {
            break;
        }

        searchedChar == ::std::tolower(searchedChar);

        for (std::string word : setOfWords) {

            std::string originalWord = word;

            std::transform(word.begin(), word.end(), word.begin(), [](unsigned char c){ return std::tolower(c); });

            if (word.find(searchedChar) != std::string::npos) {
                std::cout << originalWord << ' ';
            }        

        }

        std::cout << std::endl;

    }

    return 0;
}

// You are given a text in English. Let's define a word as any sequence of alphabetical characters. Each of those characters we'll call a letter, but we will consider the uppercase and lowercase variant of a character in a word as the same letter.

