/*

1
23
456
78910

*/

#include<bits/stdc++.h>
using namespace std;

int num =1;

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num= num+1;
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
        pattern5(n);
        
    }
    return 0;
}