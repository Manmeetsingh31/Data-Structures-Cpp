#include <bits/stdc++.h>
using namespace std;

int tbl[256];

void initialize(){
    tbl[0]=0;

    for(int i=1;i<256;i++){
        tbl[i]= tbl[i & (i-1)]+1; 
    }
}

int countSet(int n){

    return tbl[n & 255]+
    tbl[(n>>8) & 255]+
    tbl[(n>>16) & 255]+
    tbl[(n>>24) & 255];
}

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    initialize();
    cout<<"no. of set bits: "<<countSet(n);

    return 0;
}


/*

So. we have Brian Kerningam's ALGO
n=(n-1)
removes all trailing zeroes to 1 and
last 1 to 0

n=40: 101000
n=39: 100111 */