#include <bits/stdc++.h>
using namespace std;

void printDivisor(int n){

    vector<int> ls;

    for(int i=1;i<= sqrt(n);i++){       // or i*i <=n

    /*
    for example
    36's divisors:
    1x36
    2x18
    3x12
    4x9
    6x6................... sqrt of 36
    9x4
    12x3
    18x2
    36x1
    
    */

        if(n%i == 0){
            ls.push_back(i);
            // ls.push_back(n/i); this will add two 6's
            if((n/i)!=i){                
                ls.push_back(n/i);  //36/4=9: 9 will be pushed...!!  but as 36/6=6: i= n/i: so n/i will not be pushed
            }
        }
    }

    sort(ls.begin(), ls.end());
    for(auto it: ls){
        cout<< it << " ";
    }
}

int main() {
    int n;
    cin>>n;

    printDivisor(n);

    return 0;
}