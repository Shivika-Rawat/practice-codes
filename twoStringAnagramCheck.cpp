//We're given two strings. We need to check whether these two strings are anagram of each other load. 2 strings are said to be aragrah. If they have same set of characters, every character in both these tanks has same frequency. Let's.understand the problem in this example.
/*
ip:s1="listen", s2="silent"
op:yes

ip:s1:"aaacb"  s2="cbaaa"
op:yes

ip: s1="abc"  s2="abd"
op:no
*/
#include<bits/stdc++.h>
using namespace std;
//naive sol
bool anagram(string s1,string s2){
    int n1=s1.length(),n2=s2.length();
    if(n1!=n2) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<n1;i++)
    if(s1[i]!=s2[i])
    return false;
// TC:O(n log n)
    return true;
}
//Efficient sol
bool anagramStr(const string &s1, const string &s2){
    int n1=s1.length(),n2=s2.length();
    if(n1!=n2) return false;
    int count[256]={0};
    for(int i=0;i<n1;i++)
    count[s1[i]]++;
    for(int i=0;i<n2;i++)
    count[s2[i]]--;
    for(int i=0;i<256;i++)
    if(count[i]!=0) return false;
// TC:O(n)
    return true;
}
int main(){

    string s1="listen", s2="silent";
    if(anagramStr(s1,s2)) cout<<"yes";
    else cout<<"no";
    return 0;
}
//We can pass these things as references. You know, this way, when somebody passes two strings as arguments, they're not copied, right? They that will save some extra copying time. So this is 1 remark. The thing, the thing with adding references is this, when you add reference to a function, this allows this function to modify the strings also, right? This may be a function.of some library or some 3rd party function that you are calling. So when you are passing districts as references for only efficient for efficiency purposes, not for not for modifications to these things, what you do is you pass those things as constant references. So the best programming practice here is to add a cost here also. So we pass cost straight and percent. This will have efficiency, and this will also ensure that this function does not modify the strength, because it's targeted to just check whether two strings are anagram or not.
