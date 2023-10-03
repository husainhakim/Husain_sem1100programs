//Write a program to print all natural numbers from 1 to N using a while loop.

#include <iostream>
using namespace std;

int main() {
    int N, num = 1;

    // Input Get the value of N from the user
    cout << "Enter the value of N: ";
    cin >> N;

    // Output Print natural numbers from 1 to N using a while loop
    cout << "Natural numbers from 1 to " << N << " are:" << endl;

    while (num <= N) {
        cout << num << " ";
        num++;
    }

    cout << endl;

    return 0;
}
