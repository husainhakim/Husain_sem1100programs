// AIM:PROBLEM 82Create a C++ program to print the following pattern:

// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}