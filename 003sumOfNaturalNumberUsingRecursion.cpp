//This code prints the sum of first n natural numbers using recursive function

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    // when n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }

    // Recursive case: calculate the sum using the recursive formula
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = sumOfNaturalNumbers(n);
        cout << "Sum of first " << n << " natural numbers is " << result << endl;
    }

    return 0;
}
