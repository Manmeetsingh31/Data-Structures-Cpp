/*
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0;i<=n;i++){
        char ch='A';
        for(int j=0;j<=n;j++){
            cout<<ch<<" ";
            ch= ch+1; // ascii 65+1= 66 =B 
        }
        cout<<endl;
    }
    return 0;
}