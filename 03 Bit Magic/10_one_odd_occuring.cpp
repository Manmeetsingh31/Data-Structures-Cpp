#include <bits/stdc++.h>
using namespace std;

bool Odd1(int arr[], int n) {
    int res=0;

    for(int i=0; i<n; i++) {
        res = res ^ arr[i];
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

