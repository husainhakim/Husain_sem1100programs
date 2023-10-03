#include <iostream>

using namespace std;

int frequency(int array[], int a, int len) {
    int count=0;
    for(int i=0; i<len; i++) {
        if (array[i]==a){
            count++;
        }
    }

    return count;
}

int main() 
{   
    int n;
    cout << "Enter length of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter element "<<i+1<<": ";
        cin >> arr[i];
    }//user input for elements of array

    for(int i=0; i<n; i++) {
        cout << "frequency of " <<arr[i] << " is: " <<frequency(arr , arr[i], n) << endl;
    }
    return 0;
}
