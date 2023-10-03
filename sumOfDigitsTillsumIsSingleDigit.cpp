//This code returns the sum of digits of a number till sum is a single digit number, ignoring the rest sum of digits.
//Example: num=12136, sum=1+2+1+3+6=13 but our code will return only sum=1+2+1+3=7

// 

#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 10) {
        number = sumOfDigits(number);
    }//stores the sum directly in the number variable allowing checking the sum of digits directly without a second variable.

    cout << "The sum of the digits until it became a single-digit number is: " << number << endl;
    return 0;
}