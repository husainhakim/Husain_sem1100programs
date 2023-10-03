#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    if (n < 0)
    {
        cout << "number should be positive !";
        return 1;
    }
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += 1; //sum=sum+1
    }
    cout << "The sum of all even numbers between 1 and " << n << " is: " << sum << endl;
    return 0;
}