#include <algorithm>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

int main() {

    std::string input;
    std::getline(std::cin, input);


    std::istringstream streamOfWord(input);
    std::string temp;

    std::set<std::string> setOfWords;

    while (streamOfWord >> temp) {
        std::transform(temp.begin(), temp.end(), temp.begin(), [](unsigned char c) { return std::tolower(c); });

        if (temp.length() < 5) {
            setOfWords.insert(temp);
        }

    }

    bool isFirst = true;

    for (auto word : setOfWords) {
        if (!isFirst) {
            std::cout << ", ";
        } else {
            isFirst = false;
        }

        std::cout << word;
        
    }

    std::cout << std::endl;

    return 0;
}

// In SoftUni you can study Java C# PHP and JavaScript JAVA and c# developers graduate in 2-3 years Go in
