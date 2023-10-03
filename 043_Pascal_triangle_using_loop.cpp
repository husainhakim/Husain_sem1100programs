#include <iostream>
using namespace std;

int main()
{
    int numRows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; ++i)
    {
        int coef = 1;

        for (int space = 1; space <= numRows - i; ++space)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; ++j)
        {
            cout << coef << "   ";
            coef = coef * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
