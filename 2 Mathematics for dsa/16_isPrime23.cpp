#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    
    for (int i = 5; i*i <= n; i=i+6) {   // x <= sqrt(n)
        if (n % i == 0 || n% i+2==0) {
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
  

// we can save more iterations by Pre Declaring i= 2 and 3
//because if n is divicible by 4 it will be divisible by 2 too n same in case of 3
// so we will declare n=2 and 3 as true(prime) &
//check from i=5 for i and i+2: ie   5 and 7 then 
// 11 and 13 n so on 