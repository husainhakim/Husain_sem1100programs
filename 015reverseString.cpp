//This code reverses a string without using prebuild reverse() function

#include <iostream>
using namespace std;

int main() {
    string str1, reversedStr="";
    cout <<"Enter a string: ";
    getline(cin, str1);

    //reversed string to be stored:
    for (int i = str1.length() - 1; i >= 0; i--) {
        reversedStr += str1[i];
    }

    cout <<"Entered string: " << str1 << endl;
    cout <<"Reversed string: " << reversedStr << endl;
}