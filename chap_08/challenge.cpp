#include <iostream>

int main() {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickels_value {5};

    std::cout << "Enter an amount in cents: ";
    int cents {};
    std::cin >> cents;

    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    if (cents < 0) {
        std::cout << "Invalid cents. " << std::endl;
        return 1;
    } else if (cents == 0) {
        std::cout << "no change to give." << std::endl;
    } else {
        while (cents != 0) {
            if (cents >= dollar_value) {
                dollars = cents / dollar_value;
                cents %= dollar_value;
            }
            else if (cents >= quarter_value) {
                quarters = cents / quarter_value;
                cents %= quarter_value;
            }
            else if (cents >= dime_value) {
                dimes = cents / dime_value;
                cents %= dime_value;
            } else if (cents >= nickels_value) {
                nickels = cents / nickels_value;
                cents %= nickels_value;
            } else {
                pennies = cents;
                cents = 0;
            }
        }
    }

    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quarters: " << quarters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << pennies << std::endl;

    return 0;
}