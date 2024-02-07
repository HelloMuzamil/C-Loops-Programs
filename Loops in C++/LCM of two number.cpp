#include <iostream>

int main() {
    int num1, num2;

    // Input two numbers from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;

    int originalNum1 = num1;
    int originalNum2 = num2;

    // Using Euclidean algorithm to find GCD
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
    int gcd = num1;
    int lcm = (originalNum1 * originalNum2) / gcd;


    // Display the LCM
    std::cout << "LCM of " << originalNum1 << " and " << originalNum2 << " is: " << lcm << std::endl;

    return 0;
}

