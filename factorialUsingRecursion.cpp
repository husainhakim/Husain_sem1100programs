//This program prints the factorial of a number using recursive function.

#include "iostream" 
using namespace std;

int factorial(int num) {
    if(num > 0)
        return num*factorial(num-1);
    else if(num < 0) {
        return num*factorial(num+1);
    }
    else
        return 1;
}

int main() {
    int number;
    cout << "Enter number whose factorial you want: ";
    cin >> number;
    cout << number << "! is: " <<factorial(number) << endl;

    return 0;
}
