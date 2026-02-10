/*
printing from 1 to N but not using (i++,N) logic... use "-"
*/

#include <bits/stdc++.h>
using namespace std;

void One2N(int N)
{
    if (N < 1)
    {
        return;
    }

    for (int i = N; i > 0; i--)
    {
        cout << i << " ";
    }
}

int main()
{
    int N = 99;

    One2N(N);
    return 0;
}