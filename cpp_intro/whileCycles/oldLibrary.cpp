#include <iostream>
#include <string>

int main() {

    std::string favouriteBook;
    std::getline(std::cin, favouriteBook);
    bool isFound = false;
    int booksChecked = 0;

    while (true) {

        std::string currBook;
        std::getline(std::cin, currBook);

        if (currBook == "No More Books") {
            break;
        }

        if (currBook == favouriteBook) {
            isFound = true;
            break;
        }

        booksChecked++;

    }

    if (isFound) {
        std::cout << "You checked " << booksChecked << " books and found it." << std::endl;
    } else {
        std::cout << "The book you search is not here!" << std::endl;
        std::cout << "You checked " << booksChecked << " books.";
    }

}
