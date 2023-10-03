//This code find a the roots of a quadratic equation

//This code prints the roots of a quadratic equation entered by user.

#include <iostream>
using namespace std;

int main() {
    float root1, root2, dsc, realPart, imaginaryPart;
    int a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    dsc = b*b - 4*a*c;

    //using quadratic equation basis on the discriminant:
    
    if (dsc > 0) {
        root1 = (float(-b + sqrt(dsc))) / (float(2*a));
        root2 = (float(-b - sqrt(dsc))) / (float(2*a));
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << root1 << endl;
        cout << "x2 = " << root2 << endl;
    }//when both roots are real
    
    else if (dsc == 0) {
        cout << "Roots are real and same." << endl;
        root1 = float(-b)/float((2*a));
        cout << "x1 = x2 =" << root1 << endl;
    }//when only one root exists

    else {
        /*
            root= (-b ± sqrt(dsc))/(2*a);
            now for imaginary:
            root = real + imaginary.
            where real=-b/2a and imaginary=sqrt(dsc).
        */
        realPart = float(-b)/float((2*a));
        imaginaryPart =(float(sqrt(-dsc)))/(float(2*a));
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }//when roots are imaginary
    return 0;
}