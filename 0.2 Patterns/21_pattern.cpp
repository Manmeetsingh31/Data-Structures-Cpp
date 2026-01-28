/*

4 4 4 4 4 4 4
4 3 3 3 3 3 3
4 3 2 2 2 2 3
4 3 2 1 1 2 3 
4 3 2 1 1 2 3
4 3 2 2 2 2 3
4 3 3 3 3 3 3 

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < 2*n-1; i++) {          // rows
        for (int j = 0; j < 2*n-1; j++) {      // columns
            int top = i;
            int left = j;
            int right = (2*n - 1) - j;
            int bottom = (2*n - 1) - i;
            cout << n - min( min(top, bottom), min(left, right) );      //value at (i,j)
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

Example DRY RUN for n = 4:

Cell (0,0): 
i=0, j=0
top=0, left=0, right=6, bottom=6 → min=0 → 4-0 = 4

Cell (1,1):
i=1, j=1
top=1, left=1, right=5, bottom=5 → min=1 → 4-1 = 3

Cell (2,2):
i=2, j=2
top=2, left=2, right=4, bottom=4 → min=2 → 4-2 = 2

Cell (3,3):
i=3, j=3
top=3, left=3, right=3, bottom=3 → min=3 → 4-3 = 1

Cell (3,4):
i=3, j=4
top=3, left=4, right=2, bottom=3 → min=2 → 4-2 = 2

Cell (0,6):
i=0, j=6
top=0, left=6, right=0, bottom=6 → min=0 → 4-0 = 4

*/
