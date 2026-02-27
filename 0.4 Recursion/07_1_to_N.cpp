#include <bits/stdc++.h>
using namespace std;

void N2One(int n){
    if(n==0){
        return;
    }
    else{
        N2One(n-1);
        cout<<n<<endl;
    }
}

int main() {
    int n;
    cout<<"input the number n:";
    cin>>n;

    N2One(n);
    return 0;
}
