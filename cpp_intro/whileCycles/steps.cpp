#include <iostream>
#include <string>

int main() {

    int DAILY_STEP_GOAL = 10000;
    int stepsWalked = 0;

    while (stepsWalked < DAILY_STEP_GOAL) {

        std::string currSteps;
        std::getline(std::cin, currSteps);

        if (currSteps == "Going home") {
            std::string lastSteps;
            std::getline(std::cin, lastSteps);
            int lastStepsINT = std::stoi(lastSteps);
            stepsWalked += lastStepsINT;
            break;
        }

        int stepsCurr = std::stoi(currSteps);
        stepsWalked += stepsCurr;

    }

    int diff = stepsWalked - DAILY_STEP_GOAL;

    if (diff >= 0) {
        std::cout << "Goal reached! Good job!" << std::endl;
        std::cout << diff << " steps over the goal!" << std::endl;
    } else {
        std::cout << abs(diff) << " more steps to reach goal." << std::endl;
    }

}
