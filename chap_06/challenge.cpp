#include <iostream>

int main() {
    std::cout << "Hi, welcome to Frank's Carpet Cleaning Service." << std::endl;

    std::cout << "How many small rooms would you like cleanrd? ";
    int number_of_small_rooms {0};
    std::cin >> number_of_small_rooms;

    std::cout << "How many large rooms would you like cleaned? ";    
    int number_of_large_rooms {0};
    std::cin >> number_of_large_rooms;



    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};

    double cost_small_rooms = price_per_small_room * number_of_small_rooms;
    double cost_large_rooms = price_per_large_room * number_of_large_rooms;
    double total_tax = (cost_small_rooms + cost_large_rooms) * sales_tax;

    std::cout << "Price per small room: $" << price_per_small_room << std::endl;
    std::cout << "Price per large room: $" << price_per_large_room << std:: endl;
    std::cout << "Cost $:" << cost_small_rooms + cost_large_rooms << std::endl;
    std::cout << "Tax: $" << total_tax << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "Total estimate: $" << cost_small_rooms + cost_large_rooms + total_tax << std::endl;
    std::cout << "This estimate is valid for " << estimate_expiry << " days" << std::endl;

    return 0;
}