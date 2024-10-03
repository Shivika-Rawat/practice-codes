#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[]="gfg";
    char s2[]="abcd";
    int res= strcmp(s1,s2);//if they are lexicographically same return 0 .
    if(res==0)
    cout<<"Same";
    else if(res<0)
    cout<<"Smaller";
    else cout<<"Greater";

    return 0;
}