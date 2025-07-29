#include <iostream>
#include <vector>

void display_menu() {
    std::cout << std::endl;
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl << std::endl;

    std::cout << "Enter your choice: ";
}

int main() {

    std::vector<int> numbers {};
    int smallest {};
    int largest {};
    char option{};

    while (true) {
        display_menu();
        std::cin >> option;
        if (option == 'Q' || option == 'q') {
            break;
        }

        switch (option) {
            case 'P':
            case 'p': {
                std::cout << "[ ";
                for (auto val: numbers) {
                    std::cout << val << ' ';
                }
                std::cout << ']';

                if (numbers.empty()) {
                    std::cout << " - the list is empty" << std::endl;
                }
                break;
            }
            case 'A':
            case 'a': {
                int num {};
                std::cout << "Enter an integert to add to the list: ";
                std::cin >> num;
                numbers.push_back(num);
                std::cout << num << " added" << std::endl;

                if (num < smallest) {
                    smallest = num;
                } else if (num > largest) {
                    largest = num;
                }

                break;
            }
            case 'M':
            case 'm': {
                int total {};
                if (numbers.empty()) {
                    std::cout << "Unable to calculate mean - no data" << std::endl;
                } else {
                    for (auto val: numbers) {
                        total += val;
                    }
                    std::cout << "The mean is: " << static_cast<double>(total)/numbers.size() << std::endl;
                }
                
                break;
            }
            case 'S':
            case 's': {
                std::cout << "The smallest number is: " << smallest << std::endl;
                break;
            }
            case 'L':
            case 'l': {
                std::cout << "The largest number is: " << largest << std::endl;
                break;
            }
            default: {
                std::cout << "Unknown selection, please try again" << std::endl;
                break;
            }

        }
    }
    return 0;
}