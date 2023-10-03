//Create a program to check if a character is a vowel or consonant.

#include<iostream>
using namespace std;

int main(){
    char ch;

//taking the input from the user 
    cout<<"give me an aplhabet : ";
    cin>>ch;

//logic behind the code to give us the out put 
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout<<"the given alphabet is vowel";
    }
    else if(ch== '0' || ch=='1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
        cout<<"the given input is a number";
    } 
    else
    {
        cout<<"it is a consonant";
    }
    
    return 0;
}