#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    int gcd = 1; // Initial assumption

    // Using Euclidean algorithm to find GCD with a while loop
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    gcd = num1; // or gcd = num2; (both are equal at this point)

    // Display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}

