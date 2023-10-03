// AIM:problem 17 Calculate the square and cube of a number using functions
#include <iostream>
using namespace std;
// function to find the square of i
double square(double i)
{
    return i * i;
}
// function to find the cube of i
double cube(double i)
{
    return i * i * i;
}

int main()
{

    double i;
    cout << "Enter the number you want the square and cube of" << endl;
    cin >> i;

    double squared = square(i);
    double cubed = cube(i);

    cout << "The square of " << i << " is " << squared << endl;
    cout << "The cube of " << i << " is " << cubed << endl;
}
