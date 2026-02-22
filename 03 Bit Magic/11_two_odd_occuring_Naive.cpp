//NAIVE

#include <bits/stdc++.h>
using namespace std;

bool Odd2(int arr[], int n) {

    for(int i=0; i<n; i++) {
        int count=0; 

        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count%2 != 0){
            cout<<arr[i]<<" ";
        }   
    }
    
    return false;  
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