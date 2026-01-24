#include<iostream>
using namespace std;
int main(){
    int dec,rem;
    int power=1;
    int ans=0;
    cout<<"dcimal no. is:";
    cin>>dec;

    while(dec>0){
        rem=dec%2;
        dec/=2;
        ans+= (rem*power);
        power*=10;
    }
    cout<<"binary form is:"<<ans;
    return 0;

}