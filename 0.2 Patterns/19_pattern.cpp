#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||i==0||i==n-1||j==n-1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while(t--){
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        
        pattern(n);
        cout << endl;
    }
    
    return 0;
}

/*

 *  *  *  *  * 
 *           *
 *           *
 *           *
 *  *  *  *  *

*/