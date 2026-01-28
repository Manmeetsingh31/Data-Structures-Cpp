#include <bits/stdc++.h>
using namespace std;

int findLCM(int n1, int n2){
    int res=max(n1,n2);

    while(true){
        if(res%n1==0 && res%n2==0){
            return res;
            res++;
        }
    }
    return res;
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