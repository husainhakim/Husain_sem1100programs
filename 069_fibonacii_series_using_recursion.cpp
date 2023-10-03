#include <iostream>

using namespace std;

// Recursive function to calculate Fibonacci number
int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}


int main() {
    int num;

    // Input: Get the number of terms for the Fibonacci series from the user
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;

    // Output: Generate and print Fibonacci series using recursion
    cout << "Fibonacci Series: ";
    for (int i = 0; i <= num; ++i) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}
