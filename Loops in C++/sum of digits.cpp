#include<iostream>
using namespace std;

int main() {
    int a, n, r, sum = 0;

    cout << "Enter a number: ";
    cin >> a;
    for (; a > 0; a = a / 10) {
        r = a % 10;
        sum = sum + r;
    }
    cout << "The sum of digits is: " << sum;

    return 0;
}

