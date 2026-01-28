// #include <bits/stdc++.h>
// using namespace std;
 
// int countZeroes(int n){
//     int fact=1;
//     for(int i=2;i<=n;i++){
//         fact= fact* i;
//     }

//     int res=0;                         //COMMENTED PORTION WILL JUSRT GIVE US INT OVERFLOW ISSUES SO LETS TRY ANOTHER APPROACH

//     while(fact%10==0){
//         res+=1;
//         fact=fact/10;
//     }

//     return res;}

// int main() {
//     int n;

//     cout<<"enter the number: ";
//     cin>>n;

//     cout<<"number of trial zeroes:"<<countZeroes(n);
//     return 0;
// }


//!!!!!!!!!!!!!         FACTORIAL OVERFLOWS      !!!!!!!!!!!!