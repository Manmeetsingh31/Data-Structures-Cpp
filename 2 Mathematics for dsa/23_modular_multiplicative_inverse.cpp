// find modular inverse of A under modulo M
#include <bits/stdc++.h>
using namespace std;


int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

int main()
{
    int A = 3, M = 11;

    cout << modInverse(A, M);
    
    return 0;
}

//formulae is : (A * X) % M == 1
// but by Key Modular Arithmetic Property: (a × b) mod m = ((a mod m) × (b mod m)) mod m


