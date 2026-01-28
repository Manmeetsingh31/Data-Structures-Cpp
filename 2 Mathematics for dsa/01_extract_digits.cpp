#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Last_digit;

    cout<<"Enter the number: ";
    cin>>N;

    cout<<"Digits are: ";

    while(N>0){
        Last_digit= N%10;

        cout<<Last_digit<<", ";

        N=N/10;
    }

    return 0;
}