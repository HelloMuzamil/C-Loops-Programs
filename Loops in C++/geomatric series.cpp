#include <iostream>

int main() {
    // Given geometric progression: 3, 9, 27, ...
    int initialTerm = 3;
    int commonRatio = 3;

    // Counter for the number of terms displayed
    int count = 1;

    // Display the first 10 terms using a while loop
    while (count <= 10) {
        std::cout << initialTerm << " ";

        // Update the initial term for the next iteration
        initialTerm *= commonRatio;

        // Increment the count
        count++;
    }

    std::cout << std::endl;

    return 0;
}

