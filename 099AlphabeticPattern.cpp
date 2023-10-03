// AIM:problem 99 Write a C++ program to display the following pattern:

// EEEEE
// DDDD
// CCC
// BB
// A
#include <iostream>
using namespace std;
int main()
{
    char myChar = 'E';
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << myChar;
            
        }
        cout<<endl;
        myChar--;
    }
}