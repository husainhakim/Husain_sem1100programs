// AIM:PROBLEM 84PROBLEM 85Write a program to display the following pattern:

// 1
// 22
// 333
// 4444
#include <iostream>
using namespace std;
int main()
{
    // for loop applied
    for (int i = 1; i <= 4; ++i)
    {
        // for loop applied
        for (int j = 1; j <= i; ++j)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}