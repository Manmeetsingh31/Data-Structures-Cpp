#include<iostream>
using namespace std;
 
int func1(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<func1(3);
    return 0;
}