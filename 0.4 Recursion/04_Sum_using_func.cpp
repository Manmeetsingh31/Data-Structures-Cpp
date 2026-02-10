#include <bits/stdc++.h>
using namespace std;

int sumIs(int n){

    if(n<1){
        return 0;
    }

    return n + sumIs(n-1);
}

int main() {
    int n= 10;

    cout<<"sum of first "<<n<<" numbers is: "<<sumIs(n);
    return 0;
}