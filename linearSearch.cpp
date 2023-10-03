//This code searches for a particular element in an array using linear search.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "enter value of array[" << i << "]: ";
        cin >> a[i];
    }

    //linear search:
    bool check_linear=true;
    int searchVal;
    cout << "Enter value to search: ";
    cin >> searchVal;
    for (int i = 0; i < n; i++) {
        if (searchVal == a[i])
        {
            cout << searchVal << " is found at index " << i<< endl;
            check_linear=false; 
            break;
        }//searches for searchVal on each index of array, till found.
    }
    if(check_linear) {
        cout << searchVal << " is not found" << endl;
    }

    return 0;
}