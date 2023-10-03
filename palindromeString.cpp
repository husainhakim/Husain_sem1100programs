//This code checks if a given string is palindrome or not. A palindrome string is a string whose reverse is same as its original string.
//For example: "abba", when this string's each character is reversed and stored again we still get "abba" while "cat" is not a palindrome as it's reverse is "tac".
//Another way to check if a given string is palindrome is to check if the first and last character is same or not, folllowed by 2nd and second last character and so on.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    bool palindrome = false;
    cout << "Enter a string: ";
    getline(cin, str1); //Takes line input

    for(int i = 0; i < str1.length(); i++) {
        if(str1[i]  == str1[str1.length() - (i+1)]) {
            palindrome = true;
        }
        else {
            palindrome = false;
        }
    }

    if(palindrome)
        cout<<"\""<<str1<<"\" is a palindrome string"<<endl;
    else
        cout<<"\""<<str1<<"\" is a not palindrome string"<<endl;
    
    return 0;
}