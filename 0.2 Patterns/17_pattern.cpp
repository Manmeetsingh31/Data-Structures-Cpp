#include <bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i=0;i<n;i++){
        char ch='E';
        for(char j=ch-i;j<=ch;j++){
            cout<<j;
        }
        cout<<endl;
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

/*

E
DE
CDE
BCDE
ABCDE

*/