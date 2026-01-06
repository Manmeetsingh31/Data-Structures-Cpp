#include<bits/stdc++.h>
using namespace std;

void pattern18(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*" ;
        }

        cout<<endl;
    }

        //2nd half

        for(int i=0;i<n;i++){

        for(int j=0;j<i+1;j++){
            cout<<"*";
        }

        for(int j=0;j<8-(2*i);j++){
            cout<<" ";
        }

        for(int j=0;j<i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}


int main(){
    int n=5;
    pattern18(n);
    return 0;
}


/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/