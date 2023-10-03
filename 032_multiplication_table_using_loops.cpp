//Write a program to print the multiplication table of a number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int num;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Printing the multiplication table using a for loop
    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
