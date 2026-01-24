#include <iostream>
using namespace std;

void primeornot(int n)
{
    if (n <= 1) {
        cout << "not prime" << endl;
        return;
    }

    for (int i = 2; i*i <= n; i++)                //this can be i*1<=n   underroot i tak hi compare kr lete hoinn, uske baad factors repeat hone lgte hain
    {
        if (n % i == 0)                        //checks if number n has any divisor other than 1 and n itself
        {
            cout << "not prime" << endl;
            return;
        }
    }

    cout << "prime" << endl;
}

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;

    primeornot(x);
    return 0;
}
