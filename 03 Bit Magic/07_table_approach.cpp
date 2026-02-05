#include <bits/stdc++.h>
using namespace std;

int countSet(int n){
    int res = 0;
    
    while(n>0){
        n= n & (n-1);
        res+=1;
    }
    

    return res;
}

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    cout<<"no. of set bits: "<<countSet(n);

    return 0;
}