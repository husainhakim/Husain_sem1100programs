#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    if (n % 2 == 0) // if the number is divisible by 2 and its remainder is 0 then it is a even number .
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
    return 0;
}