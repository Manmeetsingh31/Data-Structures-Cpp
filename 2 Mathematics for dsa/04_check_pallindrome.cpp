//to check the pallindrome we will use: if (original no = reversed no.) it is pallindrome

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N,last_digit;
    int reverse_no=0;

    cout<<"Enter the number:";
    cin>>N;

    int dup_N=N;

    while(N>0){

        last_digit=N%10;

        N=N/10;

        reverse_no= (reverse_no*10)+last_digit;
    }

   if(dup_N == reverse_no){
    cout<<"True(number is a pallindrome)";
   }
   else{
    cout<<"\nentered no is not a pallindrome!!"<<endl;
   }

    return 0;
}