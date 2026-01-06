/*

1      1
12    21
123  321
12344321

*/

#include<bits/stdc++.h>
using namespace std;
int i,j;
int start =1;

void pattern4(int n){
    int space= 2*(n-1);

    for(int i=1;i<=n;i++){

    //numbers
    for(int j=1;j<=i;j++){
        cout<<j;
    }

    //space
    for(int j=1;j<=space;j++){
        cout<<" ";
    }

    //numbers
    for(int j=i;j>=1;j--){
        cout<<j;
    }

    cout<<endl;
    space-=2;
    }
}

int main(){
    int t;
    cout<<"enter no. of test cases:";
    cin>>t;
    while(t--){
        int n;
        cout<<"np. of rows?? :";
        cin>>n;
        pattern4(n);
        
    }
    return 0;
}