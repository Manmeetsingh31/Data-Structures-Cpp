#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Last_digit;

    int armstrong=0;
    cout<<"Enter the number: ";
    cin>>N;
    int dup_N =N;


    while(N>0){
        Last_digit= N%10;

        N=N/10;
        armstrong+= pow(Last_digit,3);

    }

    if(armstrong== dup_N ){
        cout<<"True(its an armstrong no.)";
    }
    else{
        cout<<"false";
    }
    return 0;
}

//pow(x,n) -> x raise to power n