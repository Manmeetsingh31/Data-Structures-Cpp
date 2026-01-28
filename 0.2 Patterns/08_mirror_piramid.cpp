/*
    *
   ***
  *****
 *******
  *****
   ***
    *
*/

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    // Upper half of diamond
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter number of rows: ";
        cin >> n;
        pattern1(n);
    }

    return 0;
}

