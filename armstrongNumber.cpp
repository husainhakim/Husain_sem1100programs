//This program returns the armstrong number of a user input.
//Armstrong number is the sum of all digits of a number where each digit is multiplied by itself n number of times, where n is the number of digits in the number should be equal to the original number.

#include<iostream>
using namespace std;

int numberOfDigits(int n) {
    int num=0;
    while(n != 0) {
        n /= 10;
        num++;
    }
    return num;
}
int main() {
    int number, sum=0;
    cout << "Enter number: ";
    cin >> number;
    int temp=number;
    int n=numberOfDigits(number);
    cout << "Number of digits: " << n << endl;

    while (temp != 0) {
        int digit = temp%10;
        //cout <<"digit: " <<digit << endl;
        sum = sum + pow(digit, n);
        //cout <<"power: " <<pow(digit, n) << endl;
        temp /= 10;
        //cout <<"sum: " <<sum << endl;
    }//calculates the sum of digits power n, where n is the number of digits in the number
    cout << "sum of digits t power n each, where n is number of digits: " <<sum << endl;
    if(sum == number) {
        cout<< number <<" is armstrong.";
    }
    else {
        cout<< number <<" is not armstong number.";
    }
    
}