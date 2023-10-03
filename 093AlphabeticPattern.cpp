// AIM:problem 93Write a C++ program to display the following pattern:

// A
// B C
// D E F
// G H I J
#include <iostream>
using namespace std;
int main()
{
    char currentChar = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << currentChar;
            currentChar++;
        }
        cout << endl;
    }
}