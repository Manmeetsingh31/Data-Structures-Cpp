#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {

    // negative numbers or numbers ending in 0 (except 0)
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversedHalf = 0;

    while (x > reversedHalf) {
        int lastDigit = x % 10;
        reversedHalf = reversedHalf * 10 + lastDigit;
        x = x / 10;
    }

    // even digits: x == reversedHalf
    // odd digits:  x == reversedHalf/10
    return (x == reversedHalf) || (x == reversedHalf / 10);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
