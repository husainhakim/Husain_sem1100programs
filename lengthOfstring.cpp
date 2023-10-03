//Finding the length of a string witout using length function

#include "iostream"
using namespace std;

int main() {
    string str1;
    cout << "Enter string: ";
    getline(cin, str1);
    int len=0;
    string temp=str1;
    while(temp != "") {
        temp.pop_back(); //removes one character from the string at a time.
        
        len++;
    }//loop runs till string holds value null which results in length being incremented till the length og the string itself.

    cout <<"The length of \""<< str1 << "\" is " <<len << endl;
}