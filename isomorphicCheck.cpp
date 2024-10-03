//Given two springs s and T determine if they are isomorphic.
/*Example:
i/p: abb
bdd
op:they are isomorphic

TC:O(n)  // n= Length of strings
SC:O(256) //Constant space

*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isIsomorphic(string s1, string s2){
    vector<int>v1(128,-1);
    vector<int>v2(128,-1);
    if(s1.size()!=s2.size()){ //If strings length does not match
        return false;
    }
    for(int i=0;i<s1.size();i++){
       if(v1[s1[i]] != v2[s2[i]]) {  //Checking if value of character at index I match in both vector
        return false;
       }
       v1[s1[i]]=v2[s2[i]] = i;//Storing a string position in vector for Character at index i.
    }
return true;
}
int main(){
string s1,s2;
cin>>s1>>s2;

if(isIsomorphic(s1,s2)){
    cout<<"They are isomorphic"<<endl;
}
else{
    cout<<"They're not isomorphic"<<endl;
}
    return 0;
}