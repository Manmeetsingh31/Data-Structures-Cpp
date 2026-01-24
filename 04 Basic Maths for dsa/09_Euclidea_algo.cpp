#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,GCD;

    cout<<"n1 is:";
    cin>>a;

    cout<<"\nn2 is:";
    cin>>b;

    while(a>0 && b>0){

        if(a>b){                            
            a= a%b;
        }
        else{                    //GCD(a,b)and a>b -> GCD(a-b,b) -> GCD(0,b) here b is the GCD
            b=b%a;
        }

        if(a==0){
            GCD=b;
        }
        else{
            GCD=a;
        }
    }
    cout<<"GCD is: "<<GCD;
        
    return 0;
}