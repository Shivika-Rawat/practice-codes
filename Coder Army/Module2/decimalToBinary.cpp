#include<iostream>
using namespace std;


int main(){
    int num;
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%2;// rem=num&1   wecan write it also like this
        num/=2;// num>>1;  right shift bole to 2 se div
        ans+=rem*mul;
        mul*=10;
    }
cout<<ans;
    return 0;
}