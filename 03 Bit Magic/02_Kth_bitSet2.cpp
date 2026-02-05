//naive
#include <bits/stdc++.h>
using namespace std;

int isSet(int n,int k){

    for(int i=0;i<(k-1);i++){
        n=n/2;
    }
    if((n & 1 )!= 0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}

int main() {
    int n,k;

    cout<<"enter n:";
    cin>>n;

    cout<<"enter k:";
    cin>>k;

    isSet(n,k);

    return 0;
}

// divide n by 2^k-1
//make it one and then take & with 1