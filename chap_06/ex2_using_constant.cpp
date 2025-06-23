#include <iostream>

int main() {
    std::cout << "Hi, welcome to Frank's Carpet Cleaning Service." << std::endl;
    std::cout << "How many rooms would you like to cleaned? ";

    int number_of_rooms {0};
    std::cin >> number_of_rooms;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of rooms: " << number_of_rooms << std::endl;
    std::cout << "Price per rooms: $" << price_per_room << std::endl;
    std::cout << "Cost: $" << number_of_rooms * price_per_room << std::endl;
    std::cout << "Tax: $" << number_of_rooms * price_per_room * sales_tax << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "Total estimate: $" << (number_of_rooms *price_per_room) + (number_of_rooms * price_per_room * sales_tax) << std::endl;
    std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

    return 0;
}