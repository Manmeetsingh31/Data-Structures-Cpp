// sum of first N numbers

#include <bits/stdc++.h>
using namespace std;

int sumIs(int n, int sum){

    if(n<1){
        cout<<sum;
        return -1;
    }

    sumIs(n-1,sum+n);
    return sum;
}

int main() {
    int n= 10;

    cout<<"sum of first "<<n<<" numbers is: ";
    sumIs(n,0);
    return 0;
}