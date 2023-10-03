#include <iostream>
using namespace std;
int main()
{
    int n;
    double sum = 0.0;

    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            // Add positive term for odd indices
            sum += 1.0 / i;
        }
        else
        {
            // Subtract negative term for even indices
            sum -= 1.0 / i;
        }
    }
    cout << "The sum of the series is: " << sum << std::endl;
    return 0;
}
