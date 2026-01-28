#include <bits/stdc++.h>
using namespace std;

int power(int n,int x){

    if(n==0) return 1;

    int temp= power(n/2,x);
    
    temp= temp*temp;
    if(n%2==0){
        return temp;
    }else{
        return temp*x;
    }
}

int main() {
    int n=2; //power
    int x=4;

    cout<<power(x,n);
    return 0;
}