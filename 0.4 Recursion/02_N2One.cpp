/*
printing from N to 1 but not using (i-1,N) logic... use "-"
*/

#include <bits/stdc++.h>
using namespace std;

void One2N(int N){
    if(N<1){
        return;
    }

    for(int i=N;i<=N;i--){
        cout<<i<<endl;
    }
}

int main() {
    int N=99;

    One2N(N);
    return 0;
}