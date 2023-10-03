#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], even[n], odd[n], evenIndex = 0, oddIndex = 0; // Declare the size of array
    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read numbers from the user and store them in the array
    }

    cout << "The Entered numbers are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Check whether the current number is even or odd
        if (arr[i] % 2 == 0)
        {
            even[evenIndex] = arr[i];
            evenIndex++;
        }
        else
        {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
        cout << endl;
    }
    cout  << "Even: [ ";
    for (int i = 0; i < evenIndex; i++) {
        if (i < evenIndex - 1) {
            cout << even[i] << ", ";
        } else {
            cout << even[i];
        }
    }
    cout  << "]" << endl << "Odd: [ ";
    for (int i = 0; i < oddIndex; i++) {
        if (i < oddIndex - 1) {
            cout << odd[i] << ", ";
        } else {
            cout << odd[i];
        }
    }
    cout << " ]" << endl;
    return 0;
}