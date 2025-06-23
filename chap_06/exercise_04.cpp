#include <iostream>

int main() {
    double hourly_wage {23.50};

    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Enter your age: ";
    int age {0};
    std::cin >> age;

    std::cout << name << " " << age << " " << hourly_wage << std::endl;

    return 0;
}