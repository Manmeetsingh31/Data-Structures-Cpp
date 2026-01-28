#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2,GDC;

    cout<<"n1 is:";
    cin>>n1;

    cout<<"\nn2 is:";
    cin>>n2;

    for(int i=1;i<=min(n1,n2);i++){

        if(n1%i==0 && n2%i==0){
            GDC=i;
        }
    }

    cout<<"\nGCD is: "<<GDC;

    return 0;
}