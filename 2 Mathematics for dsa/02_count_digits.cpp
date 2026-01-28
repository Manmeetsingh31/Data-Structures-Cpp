#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Last_digit;
    int counter=0;    //for count
    int cnt;

    cout<<"Enter the number: ";
    cin>>N;

    cout<<"Number of digits in the number is(Using Log10):"<< int(log10(N))+1<<endl;

    cout<<"Digits are: ";

    while(N>0){
        Last_digit= N%10;

        cout<<Last_digit<<", ";

        N=N/10;
        counter+=1;
    }

    cout<< "\nNumber of digits in ther entered number is(using while loop+counter): "<<counter<<endl;

    return 0;
}