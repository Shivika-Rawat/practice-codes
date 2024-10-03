#include<bits/stdc++.h>
using namespace std;
void binaryToDecimal(string s){
    int base=1;
    int ans=0;
    int size=s.length();
    for(int i=size-1;i>=0;i--){
        ans=ans+((int)(s[i]-'0')*base);
        base=base*2;
    }

    cout<<ans;
}
int main(){
    string s;
    cin>>s;
    binaryToDecimal(s);
    return 0;
}