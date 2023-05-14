#include <iostream>

int main()
{

    int VIDEOCARD_PRICE = 250;

    double budget;
    int videoCardNumber, processorsNumber, ramNumber;

    std::cin >> budget >> videoCardNumber >> processorsNumber >> ramNumber;

    double videoCardTotal = VIDEOCARD_PRICE * videoCardNumber;
    double processordTotal = 0.35 * videoCardTotal * processorsNumber;
    double ramTotal = 0.10 * videoCardTotal * ramNumber;

    double discount = videoCardNumber > processorsNumber ? 0.15 : 0;

    double totalSum = (videoCardTotal + processordTotal + ramTotal);
    totalSum *= (1 - discount);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    double diff = budget - totalSum;

    if (diff > 0)
    {
        std::cout << "You have " << diff << " leva left!";
    }
    else
    {
        std::cout << "Not enough money! You need " <<  diff*-1 << " leva more!";
    }
}
