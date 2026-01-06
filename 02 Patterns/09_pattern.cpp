/*
* 
* *
* * *
* * * *
* * *
* *
*
*/

#include<bits/stdc++.h>
using namespace std;
int i,j;

void pattern2(int n){
     for(int i=1;i<=2*n-1;i++){
        int stars=i; 
        if(i>n) stars= 2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"* ";
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
        pattern2(n);
        
    }
    return 0;
}