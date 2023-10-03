#include <iostream>
using namespace std;
int findHCF(int a, int b) // findHCF is a recursive function .
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return findHCF(b, a % b);
    }
}
int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 < 0 || num2 < 0)
    {
        cout << "HCF is not defined for negative numbers." << endl;
        return 1;
    }

    int hcf = findHCF(num1, num2);
    cout << "The Highest Common Factor (HCF) of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}
