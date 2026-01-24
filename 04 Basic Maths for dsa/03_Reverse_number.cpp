#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N,last_digit;
    int reverse_no=0;

    cout<<"Enter the number:";
    cin>>N;

    while(N>0){

        last_digit=N%10;

        N=N/10;

        reverse_no= (reverse_no*10)+last_digit;
    }

    cout<<"Reversed version of the entered number is: "<<reverse_no;
    return 0;
}