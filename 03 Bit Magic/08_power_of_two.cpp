#include <bits/stdc++.h>
using namespace std;

bool PowerTwo(int n){
    if(n==0){
        return false;
    }

    while(n!=1){
        if(n%2 !=0){
        return false;
        }
        n=n/2;
    }
    

    // return false;
}

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    cout<<PowerTwo(n);

    return 0;
}