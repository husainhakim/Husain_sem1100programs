//Implement a program that determines the grade of a student based on their marks

#include <iostream>
using namespace std;

int main() {
    int marks;

    // getting the input from the user
    cout << "Enter the student's marks: ";
    cin >> marks;

    // logic applied
    char grade;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output to Display the grade
    cout << "The student's grade is: " << grade << endl;

    return 0;
}
