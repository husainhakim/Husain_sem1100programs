#include <iostream>
using namespace std;
int main()
{
    int choice;
    double temperature, convertedTemperature;
    cout << "temperature converter" << endl;
    cout << "1.Celsius to Fahrenheit" << endl;
    cout << "2.Fahrenheit to Celsius" << endl;
    cout << "Select (1 or 2) : ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the temperature in Celsius ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32.0; // formula to convert C to F is: (temperature x 9/5) + 32.0
        cout << "Temperature in Fahrenheit is " << convertedTemperature << " F";
    }
    else if (choice == 2) // here else if condition is used
    {
        cout << "Enter the temperature in Fahrenheit ";
        cin >> temperature;
        convertedTemperature = (temperature - 32.0) * 5 / 9; // formula to convert F to C is: (temperature - 32.0) x 5/9 .
        cout << "Temperature in Celsius is " << convertedTemperature << " C";
    }
    else
    {
        cout << "invalid choice choose (1 or 2)";
    }
}