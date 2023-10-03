//This code returns the sum of all digits of a number, using recursion.

#include <iostream>
using namespace std;


int sumOfDigitsRecursive(int num) {
    if (num == 0) {
        return 0; //no digits left to add
    }
    
    int lastDigit = num % 10; // Get the last digit
    int remainingDigits = num / 10; // Get the remaining digits
    
    // Recursively calculate the sum of digits in the remaining number
    return lastDigit + sumOfDigitsRecursive(remainingDigits);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
    } 
    else {
        int sum = sumOfDigitsRecursive(number);
        cout << "Sum of digits of " << number << " is " << sum << endl;
    }

    return 0;
}
