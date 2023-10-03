//Calculate the product of digits of a number using a while loop.

#include <iostream>
using namespace std;

int main() {
    long long number;  // Use long long to handle large numbers
    cout << "Enter a number: ";
    cin >> number;

    long long product = 1;

    // Calculate the product of digits
    while (number != 0) {
        int digit = number % 10;  // Extract the last digit
        product *= digit;        // Multiply with the product
        number /= 10;            // Remove the last digit
    }

    cout << "Product of digits: " << product << endl;

    return 0;
}