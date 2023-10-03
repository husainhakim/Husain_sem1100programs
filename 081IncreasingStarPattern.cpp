// AIM:problem 81Write a program to print the following pattern:

// *
//**
// ***
// ****
#include <iostream>
using namespace std;
int main()
{
    int n;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}