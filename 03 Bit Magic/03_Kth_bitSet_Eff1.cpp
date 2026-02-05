#include <bits/stdc++.h>
using namespace std;

int isSet(int n,int k){

    int x=( 1<< (k-1));  //k-1 times 

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

/*
use << left shift on 1 ,k-1 times
or
move n to right shift (k-1)*/