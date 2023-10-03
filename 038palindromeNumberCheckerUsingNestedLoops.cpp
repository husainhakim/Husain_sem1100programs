//This code checks if an entered number is a palindrome number or not using nested number.

#include "iostream"
using namespace std;

int lengthOfNumber(int num) {
    int count=0;
    while(num !=0) {
        count++;
        num=num/10;
    }
    return count;
}

int main() {
    int n;
    bool isPalindrome=false;
    cout << "Enter a number: ";
    cin >> n;
    int numLength=lengthOfNumber(n);
    string x =to_string(n);
    int start=0, end=numLength-1;
    for(int i=0; i<numLength; i++) {
        for(int j=0; j<numLength; j++) {
            if(x[j] == x[numLength-j-1]) {
                isPalindrome = true;
                start++;
                end--;
            }
            else{
                isPalindrome = false;
            }
        }
    }

    if(isPalindrome) {
        cout<<n<<" is a palindrome number"<<endl;
    }
    else {
        cout<<n<< " is not a palindrome number"<<endl;
    }
}