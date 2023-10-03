//This program checks if the user entered number is perfect or not.

//a perfect number is a number which results same as the sum of all its divisor (that return remainder as 0, apart from the number itsef).
//For example: 6. it is divisible by 1,2 and 3 ONLY and the sum of all these divisors is also 6.


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a number: ";
    cin >> num;

    int sum = 0, rem;
    for(int i = 1; i < num; i++){
        rem=num%i;//checking if number is divisible by value of i.
        if(rem == 0) {
            sum=sum+i;
        }//checks if number is divisible by value of variable i and if yes then adds value of i to sum.
    }
    if(sum==num) {
        cout << num <<" is a perfect number." << endl;
    }
    else{
        cout << num <<" is not a perfect number." << endl;
    }

    return 0;
}