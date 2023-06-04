#include <iostream>
#include <limits.h>
#include <map>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <ios>


std::string printVecotrOfGrades(std::vector<double> somevector) {

    std::cout << std::setprecision(2);


    std::string result = "";
    double total = 0;

    std::ostringstream oss;


    for (int i = 0; i < somevector.size(); i++) {
        std::string sep = i == somevector.size() - 1 ? "" : " ";

        // result += std::to_string(somevector[i]);
        // result += sep;

        oss << std::fixed << std::setprecision(2) << somevector[i];
        oss << sep;

        total+= somevector[i];
    }

    double average = total / somevector.size();

    oss << " (avg: " <<  std::fixed << std::setprecision(2) << average << ")";
    
    result += oss.str();
    // result += " (avg: ";
    // result += std::to_string(average);
    // result +=")";

    return result;

}


int main() {

    int n;
    std::cin >> n;

    std::map<std::string, std::vector<double>> mapOfStudents;

    for (int i = 0; i < n; i++) {

        std::string name;
        std::cin >> name;

        double grade;
        std::cin >> grade;

        auto currResult = mapOfStudents.find(name);

        if (currResult == mapOfStudents.end()) {
            std::vector<double> newVector;
            mapOfStudents.insert({name, newVector});
            mapOfStudents[name].push_back(grade);

        } else {
            mapOfStudents[name].push_back(grade);
        }

    }
    
    for (auto itr = mapOfStudents.begin(); itr != mapOfStudents.end(); ++itr) { 
        std::cout << itr->first << " -> " << printVecotrOfGrades(itr->second) << std::endl;
    } 

    return 0;
}
