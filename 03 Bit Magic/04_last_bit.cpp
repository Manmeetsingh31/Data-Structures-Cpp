#include <bits/stdc++.h>
using namespace std;

int isSet(int n){

    if((n % 2 )!= 0){
        cout<<"yes";
    }
    else{
        cout<<"nAH";
    }

}

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    isSet(n);

    return 0;
}

/*
n%2 == 0??
*/