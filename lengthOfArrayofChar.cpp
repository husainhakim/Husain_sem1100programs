//This code prints the length of a character array.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char myString[10000];

    cout << "Enter a string: ";
    cin.getline(myString, 10000); // Read line

    int length = strlen(myString); //length of char array

    cout << "The length of the string is: " << length << endl;

    return 0;
}
