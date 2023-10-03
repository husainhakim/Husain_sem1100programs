#include <iostream>
using namespace std;

void lcsAlgo(string S1, string S2, int m, int n) {
    int LCS_table[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                LCS_table[i][j] = 0;
            } else if (S1[i - 1] == S2[j - 1]) {
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            } else {
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
            }
        }
    }

    int index = LCS_table[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
        lcsAlgo[index - 1] = S1[i - 1];
        i--;
        j--;
        index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
        i--;
    else
        j--;
    }

    cout << "The largest common subsequence of two strings (of " << S1 << " and " << S2 << ") is " << lcsAlgo << endl;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    int m = str1.length();
    int n = str2.length();

    lcsAlgo(str1, str2, m, n);

    return 0;
}