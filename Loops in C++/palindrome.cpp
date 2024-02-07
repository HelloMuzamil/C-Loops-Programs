#include <iostream>
using namespace std;

int main() {
    int originalNumber, reversedNumber = 0, remainder, temp;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> originalNumber;

    temp = originalNumber;

    // Reverse the number using a while loop
    while (temp >= 1) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp = temp/10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << std::endl;
    } else {
        cout << originalNumber << " is not a palindrome." << std::endl;
    }

    return 0;
}

