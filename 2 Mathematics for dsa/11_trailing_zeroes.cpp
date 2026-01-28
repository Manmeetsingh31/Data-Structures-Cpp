#include <bits/stdc++.h>
using namespace std;
 
int countZeroes(int n){
    int res=0;

    for(int i=5;i<=n;i=i*5){
        res= res+ n/i;               // [n/5]+ [n/25]+[n/125]   say n=125      
    }                           // 25   + 5 
    return res;
}

int main() {
    int n;

    cout<<"enter the number: ";
    cin>>n;

    cout<<"number of trial zeroes:"<<countZeroes(n);
    return 0;
}



// FACTORIAL: 1X2X3X4X5X6X7X8X9X10  NO. OF FIVES< NO. OF 2'S
// Pair of (2,5) will make a 10 so we will just count number of 5's in the prime factorization
