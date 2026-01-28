#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,GCD;

    cout<<"n1 is:";
    cin>>a;

    cout<<"\nn2 is:";
    cin>>b;

    while(a>0 && b>0){

//EUCLIDEAN SAYS: //GCD(a,b) if a>b -> GCD(a-b,b) -> do (a-b) untill IT becomes 0: GCD(0,b) here b is the GCD
        if(a>b){                            
            a= a%b;
        }
        else{           //b>a            
            b=b%a;
        }

        if(a==0){
            GCD=b;
        }
        else{  //b==0
            GCD=a;
        }
    }
    cout<<"GCD is: "<<GCD;
        
    return 0;
}