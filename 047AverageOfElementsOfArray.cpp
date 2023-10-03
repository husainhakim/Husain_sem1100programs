//This code calculate the average of elements of an array.

#include <iostream>

using namespace std;

int main() {
    int len;
    cout << "Enter length of array (values must be greater than 0): ";
    cin >> len;

    if(len<=0) {
        cout << "Invalid length, please retry later" << endl;
        return 1;
    }

    float arr[len];
    for(int i=0; i<len;i++) {
        cout << "Enter value of arr[" << i << "]: ";
        cin >> arr[i];
    }//takes elements from user.
    float sum=0;
    for(int i=0; i<len;i++) {
        sum+=arr[i];
    }

    float avr=sum/len;

    cout << "average of elements of array: " << avr << endl;

    return 0;
}