/*
A 
B B
C C C
D D D D
E E E E E
*/

#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{

    for (int i = 0; i < n; i++){
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cout << "enter no. of test cases:";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "np. of rows?? :";
        cin >> n;
        pattern7(n);
    }
    return 0;
}