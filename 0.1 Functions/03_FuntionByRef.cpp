#include <iostream>
#include <string>
using namespace std;

void strr(string &s){
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string name="raj";

    strr(name);
    cout<<name;
    return 0;
}