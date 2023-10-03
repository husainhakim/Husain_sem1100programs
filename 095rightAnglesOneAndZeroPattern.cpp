/*
Write a C++ program to display the following pattern:

1
10
101
1010
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(j%2 == 0) {
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << endl;
    }
}