#include <bits/stdc++.h>
using namespace std;


int allDiv(int n){

    for(int i=1;i*i<=n;i++){
        if(n % i==0){
            cout<<i<<" ";
            if(n%i != i){
                cout<<n/i<<" ";
            }
        }
    }
}

int main() {
    int n=20;
    allDiv(n);
    return 0;
}