#include <bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2){
    int GCD;
    for(int i=1;i<=min(n1,n2);i++){

        if(n1%i==0 && n2%i==0){
            GCD=i;
        }
    }
    return GCD;
}

int findLCM(int n1, int n2){

//EUCLIDEAN says:  a*b = LCM(n1,n2) / GCD(n1,n2)

    return (n1*n2)/ findGCD(n1,n2);
}

int main() {
    int n1,n2;
    cout<<"enter first number:";
    cin>>n1;                             

    cout<<"\nenter second number:";
    cin>>n2;
    
    cout<<"\nLCM of the given numbers is: "<<findLCM(n1,n2);
    return 0;
}