//naive
#include <bits/stdc++.h>
using namespace std;

int isSet(int n,int k){
    int x=1;  

    for(int i=0;i<(k-1);i++){
        x= x*2 ;  //multiplying x (ie 2 here), k-1 times 
    }
    if((n & x )!= 0){
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

//k<= number of bits in binary of n
//The number having 1 as its kth bit is: 2^(k-1) ie. assume its x
// so if (n & x) is 1: kth bit