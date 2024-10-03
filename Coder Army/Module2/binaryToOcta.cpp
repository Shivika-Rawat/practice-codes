#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int ans=0,rem,mul=1;
    while(num){// num>0   ye bhi likh sakte h
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans;
    return 0;
}