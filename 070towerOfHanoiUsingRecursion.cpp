//This program solves the Hanoi problem with 'n' number of disks, where n is a number entered by user.
//This code uses recursion to shift the disks from the beginning to end without keeping the bigger disk (n+1...) on (n).

#include <iostream>
using namespace std;

void towerOfHanoi(int,string,string,string);

int main() {

    int num;
    cout << "Enter number of disks: ";
    cin >> num;

    towerOfHanoi(num, "Start Tower", "Mid Tower", "Final Tower");

    return 0;
}

void towerOfHanoi(int n, string start, string mid, string end) {
    //src is the start of all dsks, aux is the middle disk and dest is the final destination.
    if (n == 1) {
        cout << "Move disk - " << n << " from " << start << " to " << end << endl;//for final destination
        return;
    }
    towerOfHanoi(n-1, start, end, mid);
    cout << "Move disk - " << n << " from " << start << " to " << end << endl;//movements of disks.
    towerOfHanoi(n-1, mid, start, end);
}
