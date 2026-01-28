/*
A->65
Z->90
a->97
z->122

A
A B
A B C
A B C D

*/

#include<bits/stdc++.h>
using namespace std;

void pattern6(int n){

    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
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
        pattern6(n);
        
    }
    return 0;
}