#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {          // rows
        for (int j = 0; j < n; j++) {      // columns
            int top = i;
            int left = j;
            int right = n - 1 - j;
            int bottom = n - 1 - i;
            int layer = min(min(top, bottom), min(left, right)); 
            cout << n - layer;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while (t--) {
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        
        pattern(n);
        cout << endl;
    }
    
    return 0;
}


/*

7777777
7666667
7655567
7654567
7655567
7666667
7777777

*/