#include <iostream>

int main () {

    std::string name;
    int projects;
    int HOURS_PER_PROJECT = 3;

    std::cin >> name;
    std::cin >> projects;

    int sum = projects * HOURS_PER_PROJECT;

    std::cout << "The architect " << name << " will need " <<  projects * HOURS_PER_PROJECT
    << " hours to complete " << projects << " project/s.";

}
