#include<iostream>
using namespace std;

int sum(int N){
    int i,sum=0;
for(i=1;i<=N;i++){
    sum+=i;
}
return sum;
}

int main(){
    cout<<"sum from 1 to 5 is:"<<sum(5)<<endl;
    return 0;
}