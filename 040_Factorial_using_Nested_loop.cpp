#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative number";
        return 1;
    }
    int factorial = 1;
    for (int i = 1; i <= number; i++)
    {
         int innerfactorial = 1;
        for (int j = 1; j <= i; j++)
        {
           innerfactorial *= j;
        }
       factorial = innerfactorial;
    }

    cout << "factorial of the number " << number << " is : " << factorial << endl;
    return 0;
}
