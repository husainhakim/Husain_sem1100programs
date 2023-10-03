#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;

    int first = 0, second = 1; // lines initialize two variables first and second to 0 and 1
    cout << "Fibonacci Sequence up to " << n << " digit: ";

    if (n >= 1) // user wants to display at least one term of the sequence.
    {
        cout << first << " ";
    }
    if (n > 2) // user wants to display at least two terms of the sequence.
    {
        cout << second << " ";
    }
    for (int i = 2; i <= n; i++)
    {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    return 0;
}