#include <bits/stdc++.h>
using namespace std;

/*
PROBLEM:
Find the maximum value of (arr[i] & arr[j]) for any pair in the array.

NAIVE APPROACH:
Check all pairs:
for i
   for j
      compute arr[i] & arr[j]

Time complexity = O(n^2)

OPTIMIZED IDEA (BITWISE GREEDY):
We build the answer bit by bit, from MSB to LSB.

Key observation:
For the AND of two numbers to have a bit set,
that bit must be set in BOTH numbers.

So for each bit:
- Assume this bit is part of the answer.
- Check how many numbers support this bit.
- If at least two numbers support it,
  we keep the bit in the result.
*/

// Function to count numbers that match a bit pattern
int checkbit(int pattern, int arr[], int n){
    int count=0;

    for(int i=0;i<n;i++){
        /*
        (pattern & arr[i]) == pattern
        means:
        arr[i] contains all bits set in pattern
        */
        if( (pattern & arr[i])== pattern ){
            count++;
        }
    }
    return count;
}


// Function to find maximum AND value of any pair
int maxAND(int arr[],int n){

    int res=0,count;


     /*
    We try each bit from MSB (31) to LSB (0).
    For each bit:
    - try adding this bit to result
    - check if at least two numbers support it
    */
    for(int bit=31;bit>=0;bit--){

        int pattern = res | (1 << bit);


         // count numbers matching this pattern
        count= checkbit( pattern, arr,n);


        // if at least two numbers support this bit
        if (count >= 2){
            // keep this bit in result
            res = pattern;
        }

    }

    return res;
}

int main() {
    
    int arr[] = { 4, 8, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum AND Value = " << maxAND(arr, n);
    return 0;
}