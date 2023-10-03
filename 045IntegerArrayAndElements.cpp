//This code initializes integer array and displays all it's elements.

#include <iostream>

using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 5}; //defining integer array.

    int arrSize = sizeof(arr) / sizeof(arr[0]); //length of array

    cout << "Elements of the array: ";
    for (int i = 0; i < arrSize; i++) 
    
    {
        cout << arr[i] << " ";
    } //displaying elements.
    
    cout << endl;

    return 0;
}
