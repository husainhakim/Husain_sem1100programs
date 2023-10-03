//This code creates the folloing pattern ( hollow box pattern):
/*
*****
*   *
*   *
*   *
*****
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows and columns (should be at least 3): ";
    cin >> n;

    if (n < 3) {
        cout << "The number of rows and columns should be at least 3." << endl;
        return 1;//ends code
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } //to print borders of the box
            else {
                cout << " ";
            } //fill the box with " " (spaces).
        }
        cout << endl;
    }

    return 0;
}
