#include <bits/stdc++.h>
using namespace std;

void N2One(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<endl;
        N2One(n-1);
    }
}

int main() {
    int n;
    cout<<"input the number n:";
    cin>>n;

    N2One(n);
    return 0;
}

