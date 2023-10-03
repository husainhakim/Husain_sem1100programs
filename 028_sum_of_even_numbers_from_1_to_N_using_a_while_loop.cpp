//Create a program to find the sum of even numbers from 1 to N using a while loop.

#include <iostream>
using namespace std;

int main() {
    int N, num = 1, sum = 0;

    // Input: Get the value of N from the user
    cout << "Enter the value of N: ";
    cin >> N;

    // Calculate the sum of even numbers from 1 to N using a while loop
    while (num <= N) {
        if (num % 2 == 0) {
            sum += num; // Add even numbers to the sum
        }
        num++;
    }
    // Output: Print the sum of even numbers
    cout << "The sum of even numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
