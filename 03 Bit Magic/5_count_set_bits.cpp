#include <bits/stdc++.h>
using namespace std;

int isSet(int n){
    int res = 0;

    while(n > 0){
        if ((n & 1) != 0) {
            res++;
        }
        n = n / 2;   // reduce n
    }

    return res;
}

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    cout<<"no. of set bits: "<<isSet(n);

    return 0;
}


/*
n=n/2

n=6= 110
n/2=3: 11
n/2=1: 1 
traverse mumber from last bit and then implement res by set bits


this algo is gonna run for 32 times

So. we have Brian Kerningam's ALGO
*/