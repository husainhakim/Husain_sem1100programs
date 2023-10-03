//Implement a program that prints the pattern of a right-angled triangle using nested loops.

#include <iostream>
using namespace std;

int main() {
int n;


cout << "Enter the number of rows for the right-angled triangle: "<<endl;
cin >> n;


for (int i = 1; i <= n; ++i) {

for (int j = 1; j <= i; ++j) {
cout << "*";
}

cout << std::endl;
}

return 0;
}