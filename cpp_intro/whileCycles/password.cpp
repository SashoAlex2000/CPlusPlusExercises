#include <iostream>


int main () {

    std::string username, password;
    std::cin >> username >> password;

    bool passwordFound = false;
    while (!passwordFound) {

        std::string curr;
        std::cin >> curr;

        if (curr == password) {
            passwordFound = true;
        }

    }

    std::cout << "Welcome " << username << "!" << std::endl;

}

