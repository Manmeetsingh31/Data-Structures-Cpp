#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i*i <= n; i++) {   // x <= sqrt(n)
        if (n % i == 0) {
            return false;
        }
    }
    return true;  
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << isPrime(n);
    return 0;
}
  

//30: (1,30), (2,15), (3,10), (5,6)
//65: (1,65), (5,13)

//if(x,y is a pair)
//x*y=n 
//& if c <= y:     x*x <= n:       x <= sqrt(n)