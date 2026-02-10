#include <bits/stdc++.h>
using namespace std;

void Odd2(int arr[], int n) {

    int x = arr[0];

    for(int i=1; i<n; i++) {
            x= x^arr[i];
    }

    int k= x & (~(x-1));

    int res1=0;
    int res2=0;

    for(int i=0;i<n;i++){
        if((arr[i] & k)!=0){
            res1= res1^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }

    cout << res1 << " " << res2;
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

    cout<<"odd occuring elememts are: ";
    Odd2(arr,n);

    return 0;
}