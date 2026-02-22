#include <bits/stdc++.h>
using namespace std;

int isSet(int n){

    if((n % 2 )!= 0){    // or we can take and (&) with 1.
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

for Odd no. last bit is 1
for EVEN no. last bit is 0.
*/