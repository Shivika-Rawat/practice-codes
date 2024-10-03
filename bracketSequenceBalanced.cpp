//Find the minimum no of brackets that we need to remove to make the given bracket sequence balanced.
#include<bits/stdc++.h>
using namespace std;
int Remove_P(string &s)
{
     int count=0;
    stack<char> st;
   

    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push('(');
       else{
         if(!st.empty()) st.pop();
          else count++;
          }
    }
    return count;

}
int main(){
    string s="(()())(())";
    cout<<Remove_P(s);
    return 0;
}