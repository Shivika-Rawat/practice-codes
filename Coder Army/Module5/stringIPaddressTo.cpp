#include<bits/stdc++.h>
using namespace std;

// IP Address= 1.1.1.1
// ans= 1[.]1[.]1[.]1

string IpAddress(string address){
 int i=0;
 string ans;
 while (i<address.size())
 {
    if(address[i]=='.'){
        ans+="[.]";
    }
    else{
        ans+=address[i];
    }
    i++;
 }
 return ans;
}
int main(){

    // string s="1.1.1.1";
    string s="255.66.25.60";
    string ans;
    ans=IpAddress(s);
    cout<<ans;
    return 0;
}