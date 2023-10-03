#include <iostream>
using namespace std;

int main() {
    int num1, num2, max, lcm;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    max = (num1 > num2) ? num1 : num2; 

    while (true) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm <<endl;
    return 0;
}
