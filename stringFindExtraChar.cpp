/*
ip: s1="abcd" , s2="abecd"
op: e
*/
#include<bits/stdc++.h>
using namespace std;
//Naive solution.
char findExtra(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n=s1.length();
    for(int i=0;i<n;i++)
    if(s1[i]!=s2[i])
    return s2[i];

    return s2[n];
}//tc:O(n log n)

//Efficient solution.

char findExtraChar(string s1,string s2){
    int count[256]={0};
    for(char x:s2)
    count[x]++;
    for(char x: s1)
    count[x]--;
    for(int i=0;i<256;i++)
    if(count[i]==1)
    return (char)i;

    return 0;
    //TC:O(n)
}

//3rd Mather and this method also have linear time complexity.
char findExtraa(const string &s1, string &s2){//We can also use rather.than Address operator.
    int n=s1.length();
    int res=0;
    for(int i=0;i<n;i++)
    res=res^s1[i]^s2[i];
    res=res^s2[n];

    return (char)res;
}

int main(){
    string s1="abcd";
    string s2="abecd";
    cout<<findExtra(s1,s2);
    cout<<endl;

    cout<<findExtraChar(s1,s2);
    cout<<endl;

    cout<<findExtraa(s1,s2);

    return 0;
}