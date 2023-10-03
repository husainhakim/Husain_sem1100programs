//This code is used to get the power of a number from user using recursion.

#include <iostream>
using namespace std;

// Function to calculate the power of a number recursively
double powerRecursive(double base, int exponent) {
    // Base case: when the exponent is 0, any non-zero number raised to 0 is 1
    if (exponent == 0) {
        return 1;
    }

    if (exponent > 0) {
        return base * powerRecursive(base, exponent - 1);
    }
    else {
        // negative exponent result in reciprocal.
        return 1.0 / (base * powerRecursive(base, -exponent - 1));
    }
}

int main() {
    double num;
    int exp;
    
    cout << "Enter the base: ";
    cin >> num;
    
    cout << "Enter the exponent: ";
    cin >> exp;

    double result = powerRecursive(num, exp);
    
    cout << num << " raised to the power of " << exp << " is " << result << endl;
    
    return 0;
}
