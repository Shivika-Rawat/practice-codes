/*intro: Sequence of characters eg: "gfg","course" .... etc.
Ismova said (typically )and no separator required
A to Z have values from 65 to90
a to z Have values from 97 to 122
*/


//Reverse a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string newstring = "";
    int l=s.length()-1;
    while(l>=0){
        newstring=newstring+s[l];
        l--;

    }
    cout<<newstring;

    return 0;
}