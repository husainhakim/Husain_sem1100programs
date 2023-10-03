//This code takes a string array from user, sorts it in ascending alphabetical order

#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the strings if they are out of order
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    string myStrings[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> myStrings[i];
    }//Inpu elements of array from user

    // Sort the strings in alphabetical order using Bubble Sort
    bubbleSort(myStrings, n);

    // Display the sorted strings
    cout << "Sorted strings in alphabetical order:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << myStrings[i] << endl;
    }

    return 0;
}
