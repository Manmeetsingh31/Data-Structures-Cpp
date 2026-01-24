/*
     1
     121
    12312
   1234123
  123451234
 12345612345
1234567123456

*/

#include<iostream>
using namespace std;

int main(){
    int n=8;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}