#include <iostream>

int main() {
    int favorite_num = 0;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std:: cin >> favorite_num;

    if (favorite_num < 1 || favorite_num > 100) {
        std::cout << "Error: The number must be between 1 and 100." << std::endl;
    } else {
        std::cout << "Amazing! That's my favorite number too!" << std::endl;
        std::cout << "No really!! " << favorite_num << " is my favorite number!" << std::endl;
    }
}