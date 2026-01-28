/*
        A
       ABC
      ABCDC
     ABCDEDC
    ABCDEFEDC
   ABCDEFGFEDC
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6, i, j;
    for (int i = 0; i < n; i++)
    {
        // space
        for (j = 0; j <= (n - i + 1); j++)
        {
            cout << " ";
        }

        // characters
        char ch = 'A';
        int brkpnt = (2 * i + 1) / 2;
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << ch;

            if (j <= brkpnt)
                ch++;
            else
                ch--;
        }

        // space
        for (j = 0; j <= (n - i + 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}