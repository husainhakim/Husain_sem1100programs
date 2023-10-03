//Write a program to find the sum of all numbers from 1 to N using a loop.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the positive number :";
    cin>> n;
    if (n < 0)
    {
        cout << "number should be positive" << endl;
        return 1; // prints an error message and returns 1
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)    //n=n(n+1)/2 formula of sum
    {
        sum += i; // sum=sum+1
    }
    cout << "Sum of the number is:" << sum << endl;
    return 0;
}