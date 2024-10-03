#include<iostream>
using namespace std;
string Remove_P(string &s)
{
    int j=0;
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]==41)
         j--;
        if(j!=0)
         res=res+s[i];
        if(s[i]==40)
         j++;
    }
    return res;

}
int main(){
    string s="(()())(())";
    cout<<Remove_P(s);
    return 0;
}