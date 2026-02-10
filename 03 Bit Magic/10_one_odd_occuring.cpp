#include <bits/stdc++.h>
using namespace std;

bool Odd1(int arr[], int n) {
    int res=0;

    for(int i=0; i<n; i++) {
        res = res ^ arr[i];     // even value pairs will become 0 and odd will be left
                                // this is for only one odd value
    }

    cout << "Odd occurring element: "<<res<<endl;
    return true;
}
    

int main() {
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Odd1(arr,n);

    return 0;
}

/*
by xor ^ props:

x^0=x
x^y=y^x
x^(y^z) = (x^y)^z
x^x = 0


so: x^x^x^...x for odd occurence= x
    x^x^x^...x for even occurence= 0
    
*/