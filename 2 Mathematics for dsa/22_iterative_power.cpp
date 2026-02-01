#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    long long result = 1;

    while (n > 0) {            //while n(exponent is>0)
        if (n % 2 == 1) {     // if n is odd
            result = result * x;
        }
        
        x = x * x;            // square the base
        n = n / 2;            // divide exponent by 2
    }

    return result;
}



int main() {
    int x,n;

    cout<<"enter exponent: ";
    cin>>n;

    cout<<"\nenter base: ";
    cin>>x;

    cout<<power(x,n);
    return 0;
}