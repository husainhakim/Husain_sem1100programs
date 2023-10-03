//AIM: PROBLEM 33;Implement a program to find the GCD of two numbers using a for loop.
#include <iostream>
using namespace std;
int main()
{
int num1,num2,gcd; //variables declared
cout<<"Enter two numbers "; // take input

cin>>num1>>num2;
for (int i =1;i <=num1 && i<=num2 ;i++) 
{
    if(num1 %i == 0 && num2 %i ==0)
{
    gcd = i;
}
}
cout<<gcd<<" is gcd of"<<num1<<" and " << num2<<endl;



}