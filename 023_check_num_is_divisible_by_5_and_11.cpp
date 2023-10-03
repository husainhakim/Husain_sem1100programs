//Define a program that checks if a number is divisible by both 5 and 11.

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input Get the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is divisible by both 5 and 11
    if (number % 5 == 0 && number % 11 == 0) {
        cout << number << " is divisible by both 5 and 11." << endl;
    } else {
        cout << number << " is not divisible by both 5 and 11." << endl;
    }

    return 0;
}
