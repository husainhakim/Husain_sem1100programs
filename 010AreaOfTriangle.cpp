// AIM:problem 10;to find the area of a triangle by taking the input from user
#include <iostream>
using namespace std;
int main()
{
    int choice;

    do
    {
        cout << " Type  '1' for normal triangle, '2'for equilateral triangle and '3' to end execution: ";

        cin >> choice;
        switch (choice)
        {
        case 1:
            double b, h;
            cout << endl
                << " Enter the value of base and height of triangle " << endl;
            cin >> b >> h;
            cout << " The area of the triangle is " << endl
                 << b * h / 2 << endl;
            break;
        case 2:
            double a;
            cout << endl
                 << "  Enter the value of a side in equilateral triangle " << endl;

            cin >> a;
            cout << " The area of equilateral triangle is  " << endl
                 << 1.732 * a * a / 4;
            break;

        case 3:

            cout << "Execution ends " << endl;
            break;
        default:
            cout << "Incorrect number please re-enter your choice" << endl;
        }
    } while (choice != 3);
}
