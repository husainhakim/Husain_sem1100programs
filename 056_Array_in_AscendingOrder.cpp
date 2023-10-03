#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    bool isAscending = is_sorted(arr.begin(), arr.end());

    cout << (isAscending ? "The array is sorted in ascending order." : "The array is not sorted in ascending order.") << endl;

    return 0;
}
