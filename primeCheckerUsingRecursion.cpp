//This code checks if a number is prime or not using a recursive function.

#include <iostream>
using namespace std;

bool primeChecker(int n, int divisor = 2) {
    if (n <= 2) {
        return (n == 2); //for 1 as non prime number and 2 as a prime number
    }
    if (n % divisor == 0) {
        return false; // num divisible, thus not prime
    }
    if (divisor * divisor > n) {
        return true; // No divisibilty found
    }

    // Recursively check with the next divisor
    return primeChecker(n, divisor + 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if(num < 0) {
        cout << "Negative number is not allowed." << endl;
    }
    else{
        if (num <= 1) {
            cout << num << " is not a prime number." << endl;
        }
        else if (primeChecker(num)) {
            cout << num << " is a prime number." << endl;
        } 
        else {
            cout << num << " is not a prime number." << endl;
        }
    }

    return 0;
}
