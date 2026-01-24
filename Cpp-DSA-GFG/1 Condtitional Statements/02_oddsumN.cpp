#include<iostream>
using namespace std;
int main(){
    int i,N;
    int oddsum=0;
    cout<<"N is:";
    cin>>N;
    
    for (i=0; i<N; i++){
        if(i%2!=0){
        oddsum+=i;
        }
    }
    cout<<oddsum;
}