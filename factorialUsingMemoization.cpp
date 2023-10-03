//This code returns the factorial of a number using memoization
//Memoization is an efficient form of function callling. As it avoids recursively calling a funcition

#include "iostream"
using namespace std;

int arr[]={};//This is a dynamic array that doesn't have a fixed size.
void fact(int n) {
    if (n >= 0) {
        arr[0] = 1;
        for (int i = 1; i <= n; ++i) {
            arr[i] = i * arr[i - 1];
        }
    }
    cout << n << "! is: " << arr[n] << endl;
}
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    //cout << "The factorial of " << num << " is " << fact(num) << endl;
    fact(num);
    return 0;
}