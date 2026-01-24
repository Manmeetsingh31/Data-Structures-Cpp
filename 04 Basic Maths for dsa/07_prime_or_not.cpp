#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n){
    int cnt=0;

    for(int i=1;i*i <=n ;i++){       // i<= sqrt(n)
        if(n%i == 0){
            cnt++;
            if((n/i)!=i){                
                cnt++;  
            }
        }
    }

    if(cnt==2){
        cout<<"Prime";
    }else{
        cout<<"non prime";
    }
}

int main() {
    int n;
    cout<<"enter the number: ";
    cin>>n;

    printDivisor(n);

    return 0;
}


    /*
    for example
    36's divisors:
    1x36
    2x18
    3x12
    4x9
    6x6  ................... sqrt of 36
    9x4
    12x3
    18x2
    36x1
    
    */