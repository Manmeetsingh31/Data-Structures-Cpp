#include<iostream>
using namespace std;

long long fact(int n){
    long long fact=1,i;

    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout<<"factorial of 5 is:"<<fact(5)<<endl;
    
    return 0;
}