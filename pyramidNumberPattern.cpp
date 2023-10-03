/*
"Write a C++ program to display the following pattern:

   1
  232
 34543
4567654
 34543
  232
   1"
*/




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j < 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 1; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j < 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 1; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
