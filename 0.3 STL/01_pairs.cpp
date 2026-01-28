#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;

void expair(){
    pair< int , int>p={5,5};
    cout<<p.first<<" ";
}

void nestedpair(){
    pair<int, pair<int, int> >q={4, {4,7}};
    cout<<q.second.first<<"  ";
}

void arrayInPair(){

    pair< int, int>array[]={{1,4},{3,6},{7,9},{9,3}};
    cout<<array[3].first;
}

int main(){
    expair();
    nestedpair();
    arrayInPair();
    return 0;
}