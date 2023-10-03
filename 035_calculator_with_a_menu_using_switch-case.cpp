#include <iostream>
using namespace std;


float getInput1() {
    float num1, num2;
     // Taking input numbers from the user
    cout << "Enter number 1: ";
    cin >> num1;
    return num1;
}

float getInput2() {
    float num2;
     // Taking input numbers from the user
    cout << "Enter number 2: ";
    cin >> num2;
    return num2;
}
int main() {
    int choice;
    float n1,n2;

    cout << "Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;


    // Perform operation based on the choice
    switch (choice) {
        case 1:
            n1=getInput1();
            n2=getInput2();
            cout << "Result: " << n1 + n2 << endl;
            break;
        case 2:
            n1=getInput1();
            n2=getInput2();
            cout << "Result: " << n1 - n2 << endl;
            break;
        case 3:
            n1=getInput1();
            n2=getInput2();
            cout << "Result: " << n1 * n2 << endl;
            break;
        case 4:
            n1=getInput1();
            n2=getInput2();
            if (n2 != 0) {
                cout << "Result: " << n1 / n2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please choose a number between 1 and 4." << endl;
    }

    return 0;
}
