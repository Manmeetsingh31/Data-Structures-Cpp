#include <iostream>
using namespace std;

long long fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    cout << "factorial of 5 is: " << fact(5) << endl;
    return 0;
}
