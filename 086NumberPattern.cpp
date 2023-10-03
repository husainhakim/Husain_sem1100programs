//AIM: PROBLEM 86Create a C++ program to print the following pattern:

// 1
// 12
// 123
// 1234
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}