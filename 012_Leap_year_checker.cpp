#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year : ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    // if the year is divisible by 4 and its remainder is 0 and if it is divisible by 100 and its remainder is NOT 0 then its a leap year .
    //  OR the the year is divisible by 400 and its remainder is 0 its a leap year
    {
        cout << year << " is a leap year ";
    }
    else
    {
        cout << year << " is not a leap year ";
    }
    return 0;
}