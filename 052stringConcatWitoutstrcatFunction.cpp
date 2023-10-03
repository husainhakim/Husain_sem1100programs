//This code concats 2 string without using strcat

#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string firstString = "Hello ";
    string secondString = "world!";
    for(int i=0; i <secondString.length();i++) {
        firstString += secondString[i];
    }//each character of secondString is individually added to firstString.
    // Output the concatenated string
    cout << "Concatenated String: " << firstString <<endl;


    return 0;
} 