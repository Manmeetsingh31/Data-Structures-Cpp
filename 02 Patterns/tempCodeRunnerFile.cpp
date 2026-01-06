#include<bits/stdc++.h>
using namespace std;

void pattern18(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            cout<<" * ";
        }

        for(int j=0;j<2*i;j++){
            cout<<"   ";
        }

        for(int j=0;j<n-i;j++){
            cout<<" * " ;
        }

        cout<<endl;
    }
