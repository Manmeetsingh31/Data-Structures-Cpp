#include <bits/stdc++.h>
using namespace std;

bool PowerTwo(int n){
    int res=0;

    // while(n>0){
    //     n= n & (n-1);
    //     res+=1;
    // }
    // if(res==1){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    //OR

    return n&& ((n & (n-1))==0);
}
    

int main() {
    int n;

    cout<<"enter n:";
    cin>>n;

    cout<<PowerTwo(n);

    return 0;
}

//powers of 2 have only 1 set/(1) in their binary representation