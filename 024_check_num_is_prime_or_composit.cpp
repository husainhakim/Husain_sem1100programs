//Write a C++ program to check if a number is prime or composite.

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    // Input: Get the number from the user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Special cases: 0, 1, and negative numbers are not prime
    if (number <= 1) {
        isPrime = false;
    } else {
        // Check for divisibility from 2 to square root of the number
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break; // If the number is divisible, it's not prime, exit the loop
            }
        }
    }

    // Output: Determine if the number is prime or composite
    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is a composite number." << endl;
    }

    return 0;
}
